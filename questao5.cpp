#include <iostream>
#include "despesa.h"
#include "controle.h"
#include <string>
#define TAM 10

void ApresentaMenu();

int main(){
    int opcao;
    double valor;
    string tip;

    Despesa gasto; //objeto

    Controle cValores;

    cout << "\tControle de gastos" << endl;

    while(true){

        ApresentaMenu();
        cin >> opcao;

        switch(opcao){

            case 1:

                cout << "\nDigite o valor da despesa: ";
                cin >> valor;
                cin.ignore();
                cout << "Digite o tipo de despesa: ";
                getline(cin, tip);

                gasto.setValor(valor);
                gasto.settipoDeGasto(tip);

                cValores.setDespesas(gasto);

                break;

            case 2:
                cout << "Total de gastos cadastrado: " << cValores.calculaTotalDeGasto() << endl;
                break;
                
            case 3:

                cout << "Tipo de despesa: " ;
                cin.ignore();
                getline(cin, tip);

                if(cValores.existeDespesaDoTipo(tip) == true){
                    cout << "Existe despesa do tipo " << tip << endl;
                }else{
                    cout << "Não existe despesa desse tipo." << endl;
                }
                
                break;
                
            case 4:
                break;

            default:
                cout << "Opção invalida" << endl;
                cout << "\n\n";
                break;
        }
     
    }


    return 0;
}


void ApresentaMenu(){

    cout << "\n1- Adicionar nova despesa" << endl;
    cout << "2- Listar total de gasto" << endl;
    cout << "3- Pesquisar gasto por tipo de despesa" << endl;
    cout << "4- Sair" << endl;

    cout << "Escolha uma opção: ";
}

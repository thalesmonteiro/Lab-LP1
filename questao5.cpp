#include <iostream>
#include "despesa.h"
#include <string>
#define TAM 10
using namespace std;

int main(){
    int opcao;
    double valor;
    string tip;

    Despesa gasto(valor, tip); //objeto

    Despesa valores[TAM];

    cout << "\tControle de gastos" << endl;

    for(int i = 0; i < TAM; i++){
        opcao = ApresentaMenu();

        switch(opcao){
            case 1:
                cout << "Digite o valor da despesa: ";
                cint >> valor;
                cin.ignore();
                cout << "Digite o tipo de despesa: ";
                getline(cin, tip);

                valores[i].setValor(valor);
                valores[i].settipoDeGasto(tip);

            case 2:
                cout << "Total de gastos cadastrado: " << consultaTotalDeGastos() << endl;
            case 3:
                //consultar gastos por tipo de gasto
            case 4:
                break;
            default:
                cout << "Opção invalida" << endl;
                cout << "\n\n";
        }

        break;       
    }

    cout << "" << gasto.getValor() << endl;
    cout << "" << gasto.gettipoDeGasto() << endl;

    cout << "" << valores[0].getValor() << endl;
    cout << "" << valores[0].gettipoDeGasto() << endl;

    cout << "" << valores[1].getValor() << endl;
    cout << "" << valores[1].gettipoDeGasto() << endl;


    return 0;
}

void ApresentaMenu(){
    int opcao;

    cout << "1- Adicionar nova despesa" << endl;
    cout << "2- Listar total de gasto" << endl;
    cout << "3- Pesquisar gasto por tipo de despesa" << endl;
    cout << "4- Sair" << endl;

    cout << "Escolha uma opção: ";
    cin << opcao;

    return opcao;
}
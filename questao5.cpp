#include <iostream>
#include "despesa.h"
#include "controle.h"
#include <string>
#define TAM 10
using namespace std;

void ApresentaMenu();

int main(){
    int opcao , i = 0, flag = 0;
    double valor;
    string tip, nomeDespesa;
    Despesa gasto(valor, tip); //objeto

    Despesa valores[TAM];

    cout << "\tControle de gastos" << endl;

    
    do{
        ApresentaMenu();
        cin >> opcao;

        switch(opcao){
            case 1:
                cout << "Digite o valor da despesa: ";
                cin >> valor;
                cin.ignore();
                cout << "Digite o tipo de despesa: ";
                getline(cin, tip);

                valores[i].setValor(valor);
                valores[i].settipoDeGasto(tip);
                i++;  

                break;

            case 2:
               cout << "Total de gastos cadastrado: " << valores[TAM].consultaTotalDeGastos(valores) << endl;
               break;
            case 3:
                cout <<"\nDespesa a ser buscada: ";
                cin.ignore();
                getline(cin, nomeDespesa);

                for(int i = 0; i < TAM; i++){
                    if(valores[i].existeDespesaDoTipo(nomeDespesa) == true){
                        flag++;
                    }      
                }
                if(flag != 0){
                    cout << "Existe " << flag << " despesa(s) deste tipo." << endl;
                }else{
                    cout << "Não existe despesa desse tipo";
                }  

                break;
            case 4:
                return 0;

            default:
                cout << "Opção invalida" << endl;
                cout << "\n\n";
                break;
            }//switch

            cout << endl;
    

    }while(i < TAM); //o laço sera encerrado quando o i do array for menor do que o TAM (tamanho fixado via define)



  return 0;


}

void ApresentaMenu(){
    cout << "1- Adicionar nova despesa" << endl;
    cout << "2- Listar total de gasto" << endl;
    cout << "3- Pesquisar gasto por tipo de despesa" << endl;
    cout << "4- Sair" << endl;

    cout << "Escolha uma opção: ";
}
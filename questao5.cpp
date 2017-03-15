#include <iostream>
#include "despesa.h"
#include <string>
#define TAM 10
using namespace std;

int main(){
    double valor;
    string tip;

    Despesa gasto(valor, tip); //objeto

    //Despesa *valores = new Despesa[TAM];
    Despesa valores[TAM];

    for(int i = 0; i < TAM; i++){
        while(true){
            cout << "Digite o valor da despesa( ou 0 para sair: ";
            cin >> valor;
            cin.ignore();
            
            if(valor == 0){
                break;
            }

            valores[i].setValor(valor);
            cout << "Digite o tipo de despesa: ";
            getline(cin, tip);
            valores[i].settipoDeGasto(tip);

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

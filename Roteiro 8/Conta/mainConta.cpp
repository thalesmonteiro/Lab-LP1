#include "Conta.h"
#include "IConta.h"
#include "ContaEspecial.h"
#include <iostream>
#include <string>

using namespace std;
void ApresentaMenu();

int main(){
    double quantia;
    Conta conta("Sebastiao", 2500, 1151, 1500);
    ContaEspecial contaEsp("Pedro", 4000, 1003, 3500);

    cout << "\n\n\tConta corrente\n" << endl;
    cout << "Saldo: " << conta.getSaldo() << endl;
    cout << "Digite a quantidade para saque : ";
    cin >> quantia;
    conta.sacar(quantia);
    cout << "Digite a quantidade para deposito : ";
    cin >> quantia;
    conta.depositar(quantia);
    cout << "Limite atual do cheque especial :  " << conta.getLimite() << endl;
    cout << "\n\n" << endl;
    cout << "\tConta Especial\n " << endl;
    cout << "Saldo: " << contaEsp.getSaldo() << endl;
    cout << "Digite a quantidade para saque : ";
    cin >> quantia;
    contaEsp.sacar(quantia);
    cout << "Digite a quantidade para deposito : ";
    cin >> quantia;
    contaEsp.depositar(quantia);
    cout << "Limite atual do cheque especial :  " << contaEsp.getLimite() << endl;

    return 0;
}

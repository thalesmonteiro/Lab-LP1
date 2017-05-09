#include "Conta.h"
#include "saldoexception.h"
#include <iostream>

Conta::Conta(string nomeCliente, double salarioMensal, double numeroConta, double saldo){
    this-> nomeCliente = nomeCliente;
    this-> salarioMensal = salarioMensal;
    this-> numeroConta = numeroConta;
    this-> saldo = saldo;
    Conta::definirLimite();
}
void Conta::setLimite(double limite){
    this->limite = limite;
}

void Conta::setSalarioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}
double Conta::getSalarioMensal(){
    return salarioMensal;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}
double Conta::getSaldo(){
    return saldo;
}
void Conta::setNumeroConta(double numeroConta){
    this->numeroConta = numeroConta;
}

double Conta::getNumeroConta(){
    return numeroConta;
}

void Conta::definirLimite(){
setLimite(2 * salarioMensal);
}
double Conta::getLimite(){
    return limite;
}

void Conta::sacar(double quant){
    if(quant > saldo || quant < 0)
        throw SaqueNaoDisponivelException();
    else {
        saldo -= quant;
        cout << "Saque realizado com sucesso." << endl;
        cout << "Saldo atual: " << saldo << endl;
    }
}

void Conta::depositar(double quant){
    if(quant > 0){
        saldo += quant;
        cout << "Deposito realizado com sucesso." << endl;
        cout << "Saldo atual: " << saldo << endl;
}
}

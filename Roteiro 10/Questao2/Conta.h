#ifndef CONTA_H
#define CONTA_H
#include <string>
#include "IConta.h"
#include "saldoexception.h"

class Conta : public IConta{
private:
    std::string nomeCliente;
    double salarioMensal,
                saldo,
                numeroConta,
                limite;
public:
    Conta(string, double, double, double);
    void setSalarioMensal(double);
    double getSalarioMensal();
    void setSaldo(double);
    double getSaldo();
    void setNumeroConta(double);
    double getNumeroConta();
    virtual void definirLimite();
    void setLimite(double);
    double getLimite();
    void sacar(double);
    void depositar(double);
};

#endif
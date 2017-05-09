#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta {
public:
    ContaEspecial(string, double, double, double);
    void definirLimite();
};


#endif
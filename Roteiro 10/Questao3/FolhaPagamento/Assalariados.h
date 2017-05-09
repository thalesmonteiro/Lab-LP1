#ifndef ASSALARIADOS_H
#define ASSALARIADOS_H
#include "Funcionario.h"
#include <iostream>


class Assalariados : public Funcionario
{

private:
    double salario;
public:
    Assalariados(double);
    virtual ~Assalariados();
    double calcularSalario();
};

#endif

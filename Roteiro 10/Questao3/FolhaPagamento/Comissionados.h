#ifndef COMISSIONADOS_H
#define COMISSIONADOS_H
#include "Funcionario.h"

class Comissionados : public Funcionario
{
    double vendasSemanais;
    double percentualComissao;
    double salario;

public:
    Comissionados();
    Comissionados (double, double, double);
    double calcularSalario ();



};

#endif

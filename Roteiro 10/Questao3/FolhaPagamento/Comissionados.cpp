#include "Comissionados.h"

Comissionados :: Comissionados ()
{
    vendasSemanais = 0;
    percentualComissao = 0;
    salario = 0;
}

Comissionados :: Comissionados (double vendasSemanais, double percentualComissao, double salario)
{
    this->vendasSemanais = vendasSemanais;
    this->percentualComissao = percentualComissao;
    this->salario = salario;
}

double Comissionados :: calcularSalario ()
{
    percentualComissao /= 100;
    salario += (percentualComissao * vendasSemanais);
    return salario;
}

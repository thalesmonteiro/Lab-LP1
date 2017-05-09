#ifndef HORISTAS_H
#define HORISTAS_H
#include "Funcionario.h"

class Horistas : public Funcionario
{
private:
    double horasTrabalhadas;
    double salarioPorHora;
    double aux;
    double extra;
    double salarioMensal;

public:
    Horistas(double, double);
    virtual ~Horistas();
    double calcularSalario();
};

#endif

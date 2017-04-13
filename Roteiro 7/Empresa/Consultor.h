#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

using namespace std;

class Consultor : public Funcionario{

public:
    double getSalario(double);
    double getSalario();

};

#endif
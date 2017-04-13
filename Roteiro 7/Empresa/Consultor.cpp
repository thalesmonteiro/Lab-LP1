#include "Consultor.h"

double Consultor::getSalario(double acrescimo){
    double salario;
    salario = getSalario();

    return salario * (acrescimo/100);
}

double Consultor::getSalario(){

    return (getSalario() * 0.1);
}
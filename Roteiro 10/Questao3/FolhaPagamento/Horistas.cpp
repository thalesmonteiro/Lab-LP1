#include "Horistas.h"

Horistas::Horistas(double horasTrabalhadas, double salarioPorHora)
{
    this->horasTrabalhadas = horasTrabalhadas;
    this->salarioPorHora = salarioPorHora;
}

Horistas::~Horistas()
{
}

double Horistas :: calcularSalario(){

    if (horasTrabalhadas < 1){
        return -1;
    }
    if (horasTrabalhadas <= 40 && horasTrabalhadas >= 1){

       salarioMensal = horasTrabalhadas * salarioPorHora;
       return salarioMensal*4;
    }
    if (horasTrabalhadas > 40){

        aux = horasTrabalhadas;
        extra = horasTrabalhadas - 40;
        horasTrabalhadas = aux + (extra * 1,5);

        salarioMensal = horasTrabalhadas * salarioPorHora;

        return salarioMensal*4;
    }
}

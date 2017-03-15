#include "despesa.h"
#include <string>

using namespace std;

Despesa::Despesa(){
	setValor(0.0);
	settipoDeGasto("");
}

Despesa::Despesa(double val, string tipo){

    setValor(val);
    settipoDeGasto(tipo);

}

void Despesa::setValor(double val)
{
	valor = val;
}

void Despesa::settipoDeGasto(string nom)
{
	tipoDeGasto = nom;
}

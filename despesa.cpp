#include "despesa.h"
#include <string>
#define TAM 10

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

bool Despesa::existeDespesaDoTipo(string tipo){
	if (gettipoDeGasto() == tipo){
		return true;
	}else{
		return false;
	}
}
double Despesa::consultaTotalDeGastos(Despesa *val){
	double soma;

	for(int i = 0; i < TAM; i++){
		soma =+ val[i].getValor();
	}

	return soma;
}
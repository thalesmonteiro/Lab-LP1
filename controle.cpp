#include "controle.h"
#include <string>
#define TAM 10


using namespace std;


Controle::Controle(double v, string t){
	despesa = new Despesa(v, t);
}

Controle::~Controle(){
	delete despesa;
}

void Controle::setDespesas(double val, string tip){
	despesa->setValor(val);
	despesa->settipoDeGasto(tip);
}

float Controle::calculaTotalDeGastos(){
	float somaDeGastos = 0;

	for(int i = 0; i < TAM; i++){
		somaDeGastos += valores[i] // de alguma forma tem que acessar o array valores la da main
	}

	return somaDeGastos;
}
#include "controle.h"
#include <string>

Controle::Controle(){
	nDespesas = 0;
}

Controle::Controle(double v, string t){
	nDespesas = 0;
}

void Controle::setDespesas(Despesa desp){
	despesas[nDespesas] = desp;
	nDespesas++;
}

double Controle::calculaTotalDeGasto(){
	double soma = 0.0;

	for(int i = 0; i < nDespesas; i++){
		soma += despesas[i].getValor();
	}

	return soma;
}

bool Controle::existeDespesaDoTipo(string nome){
	for(int i = 0; i < nDespesas; i++){
		if(nome == despesas[i].gettipoDeGasto()){
			return true;
		}	
	}
	
	return false;
}




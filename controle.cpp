#include "controle.h"
#include <string>


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
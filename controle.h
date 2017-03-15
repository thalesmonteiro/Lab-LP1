#ifndef CONTROLE_H
#define CONTROLE_H
#include "despesa.h"
#include <string>

using namespace std;

class Controle{
private:
	Despesa *despesa;
public:
	Controle(double, string);
	~Controle();
	void setDespesas(double, string);
	double getDespesasValor(){ return despesa->getValor(); }
	string getDespesasTipoDeGasto(){ return despesa->gettipoDeGasto(); }
	
};

#endif
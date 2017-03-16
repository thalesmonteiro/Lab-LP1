#ifndef CONTROLE_H
#define CONTROLE_H
#include "despesa.h"
#include <string>
#define TAM 10

using namespace std;

class Controle{

private:
	
	Despesa despesas[TAM];
	int nDespesas;

public:

	Controle();
	Controle(double, string);

	void setDespesas(Despesa);
	double getDespesasValor(int nDespesas){ return despesas[nDespesas].getValor(); }
	string getDespesasTipoDeGasto(int nDespesas){ return despesas[nDespesas].gettipoDeGasto(); }
	double calculaTotalDeGasto(); 
	bool existeDespesaDoTipo(string);
};

#endif
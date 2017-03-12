#include <iostream>


using namespace std;

class Despesa{

private:
	double valor;
	string tipoDeGasto;

public:
	Despesa(double, string); //metodo construtor
	double getValor(){ return valor; };
	string getTipoDeGasto(){ return tipoDeGasto; };

	void setValor(double);

	void setTipoDeGasto(string);
};

Despesa::Despesa(double v, string tg){
	setValor(v);
	setTipoDeGasto(tg);
}

void setValor(double v){
	valor = v;
}

void setTipoDeGasto(string tg){
	tipoDeGasto = tg;
}

class ControleDeGastos{

private:
	
public:
	double calculaTotalDeDespesa();
	existeDespesaDoTipo(string);
}

double calculaTotalDeDespesa(){

}
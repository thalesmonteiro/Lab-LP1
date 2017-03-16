#ifndef DESPESA_H
#define DESPESA_H
#include <string>
#include <iostream>

using namespace std;

class Despesa{

private:
    double valor;
    string tipoDeGasto;

public:
	Despesa();
    Despesa(double, string);

    double getValor(){ return valor; }
    void setValor(double val);
    string gettipoDeGasto() { return tipoDeGasto; }
    void settipoDeGasto(string tipo);

};


#endif

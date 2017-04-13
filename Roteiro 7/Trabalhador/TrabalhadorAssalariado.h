#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

using namespace std;

class TrabalhadorAssalariado : public Trabalhador{

public:
    TrabalhadorAssalariado();
	TrabalhadorAssalariado(string, double);
	~TrabalhadorAssalariado();
	double calcularPagamento();

};

#endif

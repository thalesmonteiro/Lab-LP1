#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <string>

using namespace std;

class TrabalhadorPorHora : public Trabalhador{

public:
    TrabalhadorPorHora();
	TrabalhadorPorHora(string, double);
	~TrabalhadorPorHora();
	double calcularPagamento(int);
};

#endif

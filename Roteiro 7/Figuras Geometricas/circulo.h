#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura.h"
#include <string>
#define PI 3.14	

using namespace std;

class Circulo: public FiguraGeometrica{

private:
	double raio;

public:
	Circulo();
	Circulo(double);
	void setRaio(double);
	double getRaio();
	double calcularArea(double);
};

#endif
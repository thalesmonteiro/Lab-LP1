#ifndef QUADRADO_H
#define QUADRADO_H
#include "figura.h"
#include <string>

using namespace std;

class Quadrado: public FiguraGeometrica{

private:
	double lado;

public:
	Quadrado();
	Quadrado(double);
	void setLado(double);
	double getLado();
	double calcularArea(double);
};

#endif

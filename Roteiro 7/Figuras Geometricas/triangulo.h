#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "figura.h"
#include <string>

using namespace std;

class Triangulo: public FiguraGeometrica{

private:
	double base;
	double altura;

public:
	Triangulo();
	Triangulo(double, double);
	void setBase(double);
	double getBase();
	void setAltura(double);
	double getAltura();
	double calcularArea(double, double);

};

#endif
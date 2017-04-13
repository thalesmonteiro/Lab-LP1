#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica{

private:
	string nome;

public:
	FiguraGeometrica();
	virtual double calcularArea();
	string getNome();
	void setNome(string);

};

#endif
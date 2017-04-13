#include "quadrado.h"

Quadrado::Quadrado(){

}

Quadrado::Quadrado(double lado){
	this->lado = lado;
}

void Quadrado::setLado(double lado){
	this->lado = lado;
}

double Quadrado::getLado(){
	return lado;
}

double Quadrado::calcularArea(double lado){
	return (lado * lado);
}
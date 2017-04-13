#include "triangulo.h"

Triangulo::Triangulo(){

}

Triangulo::Triangulo(double base, double altura){
	this->base = base;
	this->altura = altura;
}

void Triangulo::setBase(double base){
	this->base = base;
}

double Triangulo::getBase(){
	return base;
}

void Triangulo::setAltura(double altura){
	this->altura = altura;
}

double Triangulo::getAltura(){
	return altura;
}

double Triangulo::calcularArea(double base, double altura){
	return (base * altura) / 2;
}
#include "circulo.h"
#define PI 3.14

Circulo::Circulo(){

}

Circulo::Circulo(double raio){
	this->raio = raio;
}

void Circulo::setRaio(double raio){
	this->raio = raio;
}

double Circulo::getRaio(){
	return raio;
}

double Circulo::calcularArea(double raio){
	return PI * (raio * raio);

}
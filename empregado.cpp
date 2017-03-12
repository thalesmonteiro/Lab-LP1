#include <string>
#include "empregado.h" //arquivo da classe

using namespace std;

Empregado::Empregado(string n, string s, float d){ //metodo construtor
	setNome(n);
	setSobrenome(s);
	setSalario(d);
}

void Empregado::setNome(string n){
	nome = n;
}

void Empregado::setSobrenome(string s){
	sobrenome = s;
}

void Empregado::setSalario(float d){
	if(salario < 0){
		salario = 0;
	}else{
		salario = d;
	}
}

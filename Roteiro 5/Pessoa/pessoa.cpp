#include <iostream>
#include <string>
#include "pessoa.h"

using namespace std;

Pessoa::Pessoa(string n, int i, int t){
	setNome(n);
	setIdade(i);
	setTelefone(t);
}

Pessoa::Pessoa(string n){
	setNome(n);
}

void Pessoa::setNome(string n){
	nome = n;
}

void Pessoa::setIdade(int i){
	idade = i;
}

void Pessoa::setTelefone(int t){
	telefone = t;
}


#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

using namespace std;

class Pessoa{
	string nome;
	int idade;
	int telefone;

public:
	Pessoa(string, int, int);
	Pessoa(string);

	string getNome(){ return nome; };
	int getIdade(){ return idade; };
	int getTelefone(){ return telefone; };

	void setNome(string);
	void setIdade(int);
	void setTelefone(int);

};

#endif
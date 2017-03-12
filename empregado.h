#ifndef EMPREGO_H
#define EMPREGO_H
#include <string>

using namespace std;

class Empregado{

private:
	string nome;
	string sobrenome;
	float salario;

public:

	Empregado(string, string, float); //metodo  construtor

	string getNome(){ return nome;};
	string getSobrenome(){ return sobrenome;};
	float getSalario(){ return salario;};

	void setNome(string);
	void setSobrenome(string);
	void setSalario(float);

};

#endif

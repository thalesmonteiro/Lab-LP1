#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

using namespace std;

class Trabalhador{

private:
	string nome;
	double salario;
public:
	Trabalhador();
	~Trabalhador();
	void setNome(string);
	string getNome();
	void setSalario(double);
	double getSalario();
	virtual double calcularPagamento(int);
};

#endif
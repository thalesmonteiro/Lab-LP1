#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento{

private:

	string nomeDoFuncionario;
	double valorPagamento;

public:

	Pagamento(); //construtor default
	Pagamento(string, double);

	void setValorPagamento(double);
	double getValorPagamento();
	void setNomeDoFuncionario(string);
	string getNomeDoFuncionario();

};

#endif
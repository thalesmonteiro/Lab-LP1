#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "pagamento.h"
#define TAM 10

using namespace std;

class ControleDePagamentos{

private:

	Pagamento pagamentos[TAM];
	int nPagamentos;

public:

	ControleDePagamentos();
	ControleDePagamentos(string, double); //metodo construtor
	~ControleDePagamentos();	//metodo destrutor
	void setPagamentos(Pagamento);
	double getPagamentos(int nPagamentos){ return pagamentos[nPagamentos].getValorPagamento(); }
	string getFuncionarioPago(int nPagamentos){ return pagamentos[nPagamentos].getNomeDoFuncionario(); }
	double calculaTotalDePagamentos();
	bool existePagamentoParaFuncionario(string);
};

#endif
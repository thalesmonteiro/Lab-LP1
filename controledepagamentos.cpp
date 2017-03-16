#include "controledepagamentos.h"
#include "pagamento.h"
#include <string>


ControleDePagamentos::ControleDePagamentos(){
	
	nPagamentos = 0;
}

ControleDePagamentos::ControleDePagamentos(string nome, double val){

	nPagamentos = 0;
}

ControleDePagamentos::~ControleDePagamentos(){}


void ControleDePagamentos::setPagamentos(Pagamento pag){
	pagamentos[nPagamentos] = pag; 
	nPagamentos++;
}


double ControleDePagamentos::calculaTotalDePagamentos(){
	double soma = 0.0;

	for (int i = 0; i < nPagamentos; i++){
		soma += pagamentos[i].getValorPagamento();
	}

	return soma;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nome){
	for(int i = 0; i < nPagamentos; i++){
		if(nome == getFuncionarioPago(i)){
			return true;
		}	
	}
		return false;
	
}

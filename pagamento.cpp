#include "pagamento.h"
#include <string>

Pagamento::Pagamento(){ 
	setValorPagamento(0.0);
	setNomeDoFuncionario("");
}

Pagamento::Pagamento(string name, double valor){
	setNomeDoFuncionario(name);
	setValorPagamento(valor);

}

void Pagamento::setValorPagamento(double valor){
	valorPagamento = valor;
}

double Pagamento::getValorPagamento(){
	return valorPagamento;
}

void Pagamento::setNomeDoFuncionario(string name){
	nomeDoFuncionario = name;
}

string Pagamento::getNomeDoFuncionario(){
	return nomeDoFuncionario;
}
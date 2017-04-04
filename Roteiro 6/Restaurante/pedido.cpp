#include "pedido.h"

using namespace std;

void Pedido::setNumero(int numero){
	this->numero = numero;
}

void Pedido::setDescricao(string descricao){
	this->descricao = descricao;
}

void Pedido::setQuantidade(int quantidade){
	this->quantidade = quantidade;
}

void Pedido::setPreco(double preco){
	this->preco = preco;
}

Pedido::Pedido(int num, string desc, int quant, double prec){
	setNumero(num);
	setDescricao(desc);
	setQuantidade(quant);
	setPreco(prec);
}

Pedido::Pedido(){
	setNumero(0);
	setDescricao("");
	setQuantidade(0);
	setPreco(0.0);
}

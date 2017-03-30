#include "pedido.h"

using namespace std;

void Pedido::setNumero(int num){
	numero = num;
}

void Pedido::setDescricao(string desc){
	descricao = desc;
}

void Pedido::setQuantidade(int quant){
	quantidade = quant;
}

void Pedido::setPreco(double prec){
	preco = prec;
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

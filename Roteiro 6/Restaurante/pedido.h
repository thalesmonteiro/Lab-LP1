#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>

using namespace std;

//representa o pedido de um item do cardapio
class Pedido{

private:
	int numero;
	string descricao;
	int quantidade;
	double preco;

public:
	
	void setNumero(int);
	int getNumero(){ return numero; };
	void setDescricao(string);
	string getDescricao(){ return descricao; };
	void setQuantidade(int);
	int getQuantidade(){ return quantidade; };
	void setPreco(double);
	double getPreco(){ return preco; };

	Pedido(int, string, int , double);
	Pedido();
};

#endif
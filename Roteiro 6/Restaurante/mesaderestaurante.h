#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "pedido.h"
#define TAM 20

using namespace std;

//conjunto de todos os pedidos feito por uma mesa

class MesaDeRestaurante{

private:
	Pedido pedidos[TAM]; //array da class pedido, cada indice representa um pedido de uma mesa
	int numPedidos;

public:
	MesaDeRestaurante();
	~MesaDeRestaurante();
	void adicionaAoPedido(Pedido); // adiciona uma quantidade a um item da mesa
	void zeraPedidos(); //zera a quantidade de pedidos
	double calculaTotal(); //calcula o total a ser pago pela mesa

};

#endif
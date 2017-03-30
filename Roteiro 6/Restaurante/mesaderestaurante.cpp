#include "mesaderestaurante.h"
#include "pedido.h"

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(){
	numPedidos = 0;
}
MesaDeRestaurante::~MesaDeRestaurante(){
}

void MesaDeRestaurante::adicionaAoPedido(Pedido ped){
	pedidos[numPedidos] = ped;
	numPedidos++;
}

void MesaDeRestaurante::zeraPedidos(){
	for(int i = 0; i < numPedidos; i++){
		pedidos[i].setQuantidade(0);
	}

}

double MesaDeRestaurante::calculaTotal(){
	double soma = 0.0;

	for(int i = 0; i < numPedidos; i++){
		soma += pedidos[i].getPreco();
	}
	return soma;
}
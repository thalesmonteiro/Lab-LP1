#include "restaurantecaseiro.h"
#include "pedido.h"
#include "mesaderestaurante.h"

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(){
    flagPedidos = 0;
}

void RestauranteCaseiro::adicionarAoPedido(Pedido ped, int numero){  ///adiciona uma quantidade
    mesas[numero].adicionaAoPedido(ped); //adicionaAoPedido da classe mesaderestaurante
    flagPedidos++;
} 

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0.0;

	for(int i = 0; i < TAM; i++){
		total += mesas[i].calculaTotal();
	}

	return total;
}
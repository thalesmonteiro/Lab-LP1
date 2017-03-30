#include "restaurantecaseiro.h"
#include "pedido.h"
#include "mesaderestaurante.h"

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(){
    numMesa = 0;
}

void RestauranteCaseiro::adicionarAoPedido(Pedido ped){  ///adiciona uma quantidade
    mesas[numMesa].adicionaAoPedido(ped); //adicionaAoPedido da classe mesaderestaurante
} 

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0.0;

	for(int i = 0; i < numMesa; i++){
		total += mesas[i].calculaTotal();
	}

	return total;
}
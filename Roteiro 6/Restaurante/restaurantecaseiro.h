#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#define TAM 20
#include "mesaderestaurante.h"


using namespace std;
//representa as mesas do restaurante

class RestauranteCaseiro{

	private:
		MesaDeRestaurante mesas[TAM];
		int flagPedidos;

    public:
    	MesaDeRestaurante getMesas(int i){ return mesas[i];}
		RestauranteCaseiro();
    	void adicionarAoPedido(Pedido, int); ///adiciona uma quantidade
        double calculaTotalRestaurante(); //calcula o total arrecado de todas as mesas

};

#endif
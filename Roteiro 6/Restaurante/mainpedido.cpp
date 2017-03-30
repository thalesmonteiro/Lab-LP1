#include <iostream>
#include "pedido.h"
#include "mesaderestaurante.h"
#include "restaurantecaseiro.h"

using namespace std;

void ApresentaCardapio(){
	cout << "\n\n\tCardápio Preço" << endl;
	cout << "1- Refrigerante       R$ 3,00" << endl;
	cout << "2- Arroz com Fritas   R$ 10,00" << endl;
	cout << "3- Rubacao            R$ 12,00" << endl;
	cout << "4- Hamburguer         R$ 6,00 " << endl;
	cout << "5- Salada             R$ 5,00" << endl;
	cout << " ";
}

void ApresentaMenu(){
	cout << "\n1- Fazer novo pedido" << endl;
	cout << "2- Cancelar pedido desta mesa" << endl;
	cout << "3- Pedir a conta" << endl;
}

int main(){
	
	int opcaoCardapio;
	int quant = 0;
	int opcaoMenu;

	Pedido aPedido;
	MesaDeRestaurante aMesa;
	RestauranteCaseiro aMesaRes;

	ApresentaMenu();
	cout << "Escolha uma opcao: ";
	cin >> opcaoMenu;
						
	if(opcaoMenu == 1){

		ApresentaCardapio();
			cout << "Escolha um item do cardapio: ";
			cin >> opcaoCardapio;
			cout << "Quantidade desejada: ";
			cin >> quant;

				switch (opcaoCardapio){
						case 1:
							aPedido.setNumero(1);
							aPedido.setDescricao("Refrigerante");
							aPedido.setQuantidade(quant);
							aPedido.setPreco(3.00);

							break;
						case 2:

							aPedido.setNumero(2);
							aPedido.setDescricao("Arroz com Fritas");
							aPedido.setQuantidade(quant);
							aPedido.setPreco((10.00) * quant);
							break;
						case 3:

							aPedido.setNumero(3);
							aPedido.setDescricao("Rubacao");
							aPedido.setQuantidade(quant);
							aPedido.setPreco((12.00) * quant);
							break;
						case 4:

							aPedido.setNumero(4);
							aPedido.setDescricao("Hamburguer");
							aPedido.setQuantidade(quant);
							aPedido.setPreco((6.00) * quant);
							break;
						case 5:

							aPedido.setNumero(5);
							aPedido.setDescricao("Salada");
							aPedido.setQuantidade(quant);
							aPedido.setPreco((5.00) * quant) ;
							break;
					}
		}

		if(opcaoMenu == 2){
			aMesa.zeraPedidos();
			cout << "Pedido cancelado" << endl;
		}

		if(opcaoMenu == 3){
			cout << "Total: " << aMesa.calculaTotal() << endl;
		}


	

	return 0;
}
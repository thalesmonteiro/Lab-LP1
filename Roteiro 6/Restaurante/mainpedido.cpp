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
}

void ApresentaMenu(){
	cout << "\n1- Fazer novo pedido" << endl;
	cout << "2- Cancelar pedido desta mesa" << endl;
	cout << "3- Pedir a conta" << endl;
	cout << "4- Sair" << endl;
}

int main(){
	
	int opcaoCardapio;
	int quant;
	int opcaoMenu;
	int numeroDaMesa;

	
	RestauranteCaseiro aMesaRes;


	while(true){
		cout << "Digite o numero da mesa: ";
		cin >> numeroDaMesa;

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

						aMesaRes.adicionarAoPedido(Pedido(1, "Refrigerante", quant, (3.00 * quant)), numeroDaMesa);
						cout << "Pedido realizado com sucesso\n" << endl;

						break;
					case 2:

						aMesaRes.adicionarAoPedido(Pedido(2, "Arroz com Fritas", quant, (10.00 * quant)), numeroDaMesa);
						cout << "Pedido realizado com sucesso\n" << endl;

						break;
					case 3:
						aMesaRes.adicionarAoPedido(Pedido(3, "Rubacao", quant, (12.00 * quant)),numeroDaMesa);
						cout << "Pedido realizado com sucesso\n" << endl;
			
						break;
					case 4:
						aMesaRes.adicionarAoPedido(Pedido(4, "Hamburguer", quant, (6.00 * quant)),numeroDaMesa);
						cout << "Pedido realizado com sucesso\n" << endl;

						break;
					case 5:
						aMesaRes.adicionarAoPedido(Pedido(5, "Salada", quant, (5.00 * quant)), numeroDaMesa);
						cout << "Pedido realizado com sucesso\n" << endl;
						break;
				}
		}

		if(opcaoMenu == 2){
			aMesaRes.getMesas(numeroDaMesa).zeraPedidos();
			cout << "Pedido cancelado" << endl;
		}

		if(opcaoMenu == 3){
			cout << "Total desta mesa: R$ " << aMesaRes.getMesas(numeroDaMesa).calculaTotal() << "\n" << endl;
		}

		if(opcaoMenu == 4){
			break;
		}

	}
	
	cout << "Total apurado do dia: R$ " << aMesaRes.calculaTotalRestaurante() << "\n" << endl;


	return 0;
}
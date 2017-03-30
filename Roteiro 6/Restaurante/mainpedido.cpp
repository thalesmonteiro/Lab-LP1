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
}

int main(){
	
	int opcaoCardapio;
	int quant = 0;
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
								//int aux = aMesaRes.aMesa[numeroDaMesa].getNumPedidos() + 1;
								aMesaRes.getMesas(numeroDaMesa).adicionaAoPedido((Pedido(1, "Refrigerante", quant, (3.0) * quant)));

								break;
							case 2:


								aMesaRes.getMesas(numeroDaMesa).getPedido().setNumero(2);
								aMesaRes.getMesas(numeroDaMesa).getPedido().setDescricao("Arroz com Fritas");
								aMesaRes.getMesas(numeroDaMesa).getPedido().setQuantidade(quant);
								aMesaRes.getMesas(numeroDaMesa).getPedido().setPreco((10.00) * quant);

								break;
							case 3:

								aMesaRes.getMesas(numeroDaMesa).getPedido().setNumero(3);
								aMesaRes.getMesas(numeroDaMesa).getPedido().setDescricao("Rubacao");
								aMesaRes.getMesas(numeroDaMesa).getPedido().setQuantidade(quant);
								aMesaRes.getMesas(numeroDaMesa).getPedido().setPreco((12.00) * quant);

			
								break;
							case 4:


								aMesaRes.getMesas(numeroDaMesa).getPedido().setNumero(4);
								aMesaRes.getMesas(numeroDaMesa).getPedido().setDescricao("Hamburguer");
								aMesaRes.getMesas(numeroDaMesa).getPedido().setQuantidade(quant);
								aMesaRes.getMesas(numeroDaMesa).getPedido().setPreco((6.00) * quant);

								break;
							case 5:

								aMesaRes.getMesas(numeroDaMesa).getPedido().setNumero(5);
								aMesaRes.getMesas(numeroDaMesa).getPedido().setDescricao("Salada");
								aMesaRes.getMesas(numeroDaMesa).getPedido().setQuantidade(quant);
								aMesaRes.getMesas(numeroDaMesa).getPedido().setPreco((5.00) * quant);

								break;
						}
			}

			if(opcaoMenu == 2){
				aMesaRes.getMesas(numeroDaMesa).zeraPedidos();
				cout << "Pedido cancelado" << endl;
			}

			if(opcaoMenu == 3){
				cout << "Total: " << aMesaRes.getMesas(numeroDaMesa).calculaTotal() << endl;
			}

	}
	

	return 0;
}
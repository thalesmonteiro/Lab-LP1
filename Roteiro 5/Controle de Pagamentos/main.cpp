#include <iostream>
#include "pagamento.h"
#include "controledepagamentos.h"
#define TAM 10

void ApresentaMenu();

int main(){
	int opcao, i = 0;

	string nome;
	double salario;

	ControleDePagamentos cPag;
	
	Pagamento aPagamentos;

	while(true){

		ApresentaMenu();
		cin >> opcao;

		switch(opcao){

			case 1:

				cout << "Nome do Funcionario: ";
				cin.ignore(); 
				getline(cin, nome);
				cout << "Valor pago: ";
				cin >> salario;

				aPagamentos.setNomeDoFuncionario(nome);
				aPagamentos.setValorPagamento(salario);
				
				cPag.setPagamentos(aPagamentos);

				i++;

				break;
			case 2:
				cout << "Total pago em salarios: R$ " << cPag.calculaTotalDePagamentos() << endl;
				break;
			case 3:
				cout << "Nome do Funcionario: " ;
				cin.ignore();
				getline(cin, nome);

				if(cPag.existePagamentoParaFuncionario(nome) == true){
					cout << "Funcionario pago" << endl;
				}else{
					cout << "Funcionario nao pago" << endl;
				}

			case 4:
				return 0;
			default:
				cout << "Opção Invalida.\n\n\n" << endl;
				break;

		}
	}
	return 0;
}

void ApresentaMenu(){
	cout << "1- Cadastrar funcionario pago" << endl;
	cout << "2- Total pago" << endl;
	cout << "3- Consultar pagamento" << endl;
	cout << "4- Sair" << endl;
	cout << "Escolha uma opção: ";
}
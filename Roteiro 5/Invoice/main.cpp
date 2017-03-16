#include <iostream>
#include "invoice.h"
#include <string>

using namespace std;

//Para compilar no linux (g++ -o main main.cpp invoice.cpp invoice.h)

int main(){

	int numero;
	int quantidade;
	float preco;
	float valorFatura;
	string descricao;

	cout << "\tSitema de geração de faturas." << endl;

	cout << "Código do produto: ";
	cin >> numero;

	cout << "Descrição do produto: ";
	cin >> descricao;

	cout << "Preço do produto (unitário): ";
	cin >> preco;

	cout << "Quantidade do produto vendido: ";
	cin >> quantidade;
	
	Invoice InvoiceTest(numero, descricao, quantidade, preco); //objeto

	valorFatura = InvoiceTest.getInvoiceAmount(quantidade, preco); 


	cout << "Total da fatura: " << valorFatura << endl;

	cout << "\n\tRelatório de Venda" << endl;
	cout << "Código: " << InvoiceTest.getNumero();
	cout << "\nDescrição: " << InvoiceTest.getDescricao();
	cout << "\nPreço unitário: " << InvoiceTest.getPreco() << " reais";
	cout << "\nQuantidade vendida: " << InvoiceTest.getQuantidade();
	cout << "\nTotal da fatura: " << valorFatura  << " reais"<< endl;


}

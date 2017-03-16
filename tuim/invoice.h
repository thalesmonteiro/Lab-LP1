#ifndef INVOICE_H
#define INVOICE_H
#include <string>
#include <iostream>

using namespace std;

class Invoice{

private:
	int numero;
	string descricao;
	int quantidade;
	float preco;

public:

	Invoice(int, string, int, float); //metodo construtor
   
	int getNumero();
	int getQuantidade();
	string getDescricao();
	float getPreco();

	void setNumero(int);
	void setDescricao(string);
	void setQuantidade(int);
	void setPreco(float);

	float getInvoiceAmount(int, float); //metodo


};

#endif

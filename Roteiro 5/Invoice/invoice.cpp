#include "invoice.h"
#include <iostream>
#include <string>

using namespace std;

float Invoice::getInvoiceAmount(int q, float p){

	return ((float)q * p);
}

Invoice::Invoice(int n, string d, int q, float p){ //implementacao do metodo construtor

	setNumero(n);
	setDescricao(d);
	setQuantidade(q);
	setPreco(p);

}

int Invoice::getNumero(){
	return numero;
}
	
int Invoice::getQuantidade(){
	return quantidade;
}

string Invoice::getDescricao(){
	return descricao;
}
float Invoice::getPreco(){
	return preco;
}

void Invoice::setNumero(int n){
	numero = n;
}

void Invoice::setDescricao(string d){
	descricao = d;
}

void Invoice::setQuantidade(int q){
	if(q < 0){
		quantidade = 0;
	}else{
		quantidade = q;
	}
}

void Invoice::setPreco(float p){
	if(p < 0.0){
		preco = 0.0;
	}else{
		preco = p;
	}
}
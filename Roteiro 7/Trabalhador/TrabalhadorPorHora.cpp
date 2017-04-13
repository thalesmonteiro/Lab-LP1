#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(string nome, double salario){
	
	setNome(nome);
	setSalario(salario);
}

TrabalhadorPorHora::~TrabalhadorPorHora(){

}

double TrabalhadorPorHora::calcularPagamento(int hora){
	double salarioSemanal =  getSalario() / 4; 
	
	if(hora > 40){
	    double precoPorHora = salarioSemanal / hora;        //  O preco da hora é calculada de acordo com o salario mensal dele
		salarioSemanal += ((hora - 40) * (3*precoPorHora/2)); // O salario semanal sera o salario semanal mais o valor das horas extras
	}
	
	return salarioSemanal;
}

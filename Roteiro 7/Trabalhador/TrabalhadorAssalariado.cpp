#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double salario){
	setNome(nome);
	setSalario(salario);

}
TrabalhadorAssalariado::~TrabalhadorAssalariado(){

}

double TrabalhadorAssalariado::calcularPagamento(){
	return (getSalario() / 4);
}

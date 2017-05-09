#include "validanumero.h"
#include "myexception.h"
#include <iostream>

TestaValidaNumero::TestaValidaNumero(){

}

void TestaValidaNumero::validaNumero(int numero){

	if(numero <= 0){
		throw ValorAbaixoException(); 
	
	}else if(numero >= 100 && numero < 1000){
		throw ValorAcimaException();
	
	}else if(numero >= 1000){
		throw ValorMuitoAcimaException();
	
	}else if(numero > 0 && numero < 100){
		std::cout << "Número válido." <<std::endl;
	}
}
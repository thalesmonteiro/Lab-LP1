#include "myexception.h"
#include "validanumero.h"
#include <iostream> 
#include <stdexcept>
#include <exception>

int main(){
	int num;
	TestaValidaNumero numero;
	
	for(int i = 0; i < 5; i++){

		std::cout << "\nInforme um numero: ";
		std::cin >> num;

		try{
			numero.validaNumero(num);
		}

		catch(std::runtime_error &n){
			std::cout << n.what() << std::endl;
		}
	}
}

#include "figura.h"
#include "triangulo.h"
#include "quadrado.h"
#include "circulo.h"
#include <string>
#include <iostream>

using namespace std;

void ApresentaMenu(){
	cout<< "Digite a opcao de acordo com a forma geometrica desejada: " << endl;
	cout << "1-Triangulo" << endl;
	cout << "2-Quadrado" << endl;
	cout << "3-Circulo" << endl;
	cout << "4-Sair" << endl;
}



int main(void)
{	
	int escolha;

	
	ApresentaMenu();

	Triangulo t(4, 4);

	Quadrado q(3);

	Circulo c(2);

	cin >> escolha;

	switch(escolha){
		case 1:
			cout << t.calcularArea(4,4) << endl;
		break;

		case 2:
			cout << q.calcularArea(3) << endl;
		break;

		case 3:
			cout << c.calcularArea(3) << endl;
		break;

		case 4:
			break;
	}
	



	return 0;
}


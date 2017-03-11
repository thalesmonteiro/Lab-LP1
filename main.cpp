#include "data.h"
#include <iostream>

using namespace std;

int main(){

	int dia, mes, ano;

	cout << "Digite uma dia: ";
	cin >> dia ;
	cout << "mês:";
	cin >> mes;
	cout << "ano:";
	cin >> ano;
	
	Data(dia, mes, ano);

	Data dataTest(dia, mes, ano);
	cout << endl;
	cout << dataTest.getDia() << "/" << dataTest.getMes() << "/" << dataTest.getAno() << endl; 

	dataTest.avancarDia();
	cout << "O proximo dia é: ";
	cout << dataTest.getDia() << "/" << dataTest.getMes() << "/" << dataTest.getAno() << endl; 

	return 0;
}
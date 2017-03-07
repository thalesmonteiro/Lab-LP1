#include <iostream>

using namespace std;

int main (){
	int num1, aux = 0;

	do {
		
		cout << "Digite um número: " << endl;
		cin >> num1;

		if( num1 >= aux){
			aux = num1;
		}

	}while(num1 != 0);

	cout << "O maior número é: " << aux << endl;
 
 return 0;
}
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int vezes, aux, soma;
	int ar[6] = {0,0,0,0,0,0};

	cout << "Digite a quantidade de lançamentos: ";
	cin >> vezes;			

	srand(time(NULL));

	for(int i = 0; i < vezes; i++){
		
		aux = (rand() % 6) + 1;

		for(int j = 0; j < 6; j++){
			if(aux == j){
				ar[j]++;
			}
		}
	}
	for(int i = 0; i < 6; i++){
		cout << ar[i];
	}
	for(int i = 0; i < 6; i++){
		soma = ((ar[i] / vezes) * 100);
		cout << "Face " << (i + 1) << ": " << soma << endl;

	}



	return 0;
}
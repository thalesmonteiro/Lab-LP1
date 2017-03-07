#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	float vezes, aux;
	float ar[6] = {0};
	float porcentagem;

	cout << "Digite a quantidade de lançamentos: ";
	cin >> vezes;			

	srand(time(NULL));
	
	for(int i = 0; i <= vezes; i++){
		
		aux = (rand() % 6 + 1);

		for(int j = 0; j < 6; j++){
			if(aux == j){
				ar[j]++;
			}
		}
	}

	for(int i = 0; i < 6; i++){
		
		porcentagem = ((ar[i] / vezes) * 100);

		cout << "Face " << (i + 1) << ": " << porcentagem << "%"<< endl;
	}



	return 0;
}
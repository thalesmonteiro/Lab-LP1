#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int acerto, palpite;

	srand(time(NULL));
	acerto = rand() %101;

	while(true){
		cout << "Digite um numero e veja se acertou: " ;
		cin >> palpite;

		if(palpite == acerto){
			cout << "Voce acertou. Parabens" << endl;
			return 0;
		}else{
			cout << "Tente novamente." << endl;
		} 
	}
	return 0;
}
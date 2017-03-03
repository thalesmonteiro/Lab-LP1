#include <iostream>

using namespace std;

float percentual(int voto, int total){

	return ( ( (float)voto / (float) total ) * 100);
}

int main(){

	int ar[23];
	int aux, votos = 0, a, b, cont = 0;

	for (int i = 0; i < 23; i++){
		ar[i] = 0;
	}

	cout << "Sistema de votação para o melhor jogador da partida." << endl;
	cout << endl;

	while(true){

			cout << "Informe o número da camisa do jogador: " ;
			cin >> aux;

			if(aux == 0){
				break;
			}else if(aux > 23){
				cout << "Jogador não encontrado"<< endl;
			}else{
				ar[aux - 1]++;
				votos++;
			}

	}
	cout << endl;

	cout << "Total de votos computados: " << votos << endl;

	for(int i = 0; i < 23; i++){
		if(ar[i] != 0){
			cout << "Jogador " << (i + 1) << " recebeu: " << ar[i] << " voto(s)" << endl;
		}
	}	

	cout << endl;

	for(int i = 0; i < 23; i++){
		if(ar[i] != 0){
			float porcentagem;

			porcentagem = percentual(ar[i], votos);
			cout << "Percentual de votos jogador " << (i + 1) <<" :" << porcentagem << "%" << endl;

		}
	}

	a = ar[0];
	
	for(int i = 1; i <= 23; i++){ //Percorre o array em busca do jogador mais votado.
		if(a <= ar[i]){
			a = ar[i];
			b = (i + 1); //guarda o numero do jogador mais votado.
		}	
	}

	for(int i = 0; i < 23; i++){ //verifica se houve mais de um jogador sendo o mais votado.
		if(a == ar[i]){
			cont++;
		}
	}

	cout << endl;
	
	if(cont == 1){
		cout << "O jogador mais votado foi o de numero " << b << " com " << a << " votos" << endl;
	}else if(cont != 1){
		cout << "Houve empate entre " << cont << " jogadores com " << a << " votos cada"<< endl;
		
		for(int i = 0; i < 23; i++){
			if(ar[i] == a){
				cout << "Jogador " << (i + 1) << endl; 
			}
		}
	}

	return 0;
		
}
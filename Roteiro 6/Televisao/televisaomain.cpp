#include "televisao.h"
#include <iostream>

using namespace std;

void ApresentaMenu(){
	cout << "Digite 1 para mudar o Volume" << endl;
	cout << "Digite 2 para mudar o Canal" << endl;
	cout << "Digite a opção: ";

}

int main(){

	Televisao tv(0,0);
	int x = 0;
	int d = 0;
	int z = 0;
	ApresentaMenu();
	cin >> x;
	if (x == 1){
		cout << "Digite 0 para diminuir ou 1 para aumentar" << endl;
		cin >> d;

		tv.ControleVolume(d);
		cout << "Volume Atual ->" << tv.getVolume()  << endl;
	}
	if (x == 2){
		cout <<"Digite 1 para aumentar, 0 para diminuir";
	    	cout <<" ou digite o canal desejado: " << endl;
	 	cin >> z;
		if(z != 0 && z != 1){
			tv.setCanal(z);
			cout << "if " << z << endl;
		}else{ 
			tv.ControleCanal(z); 
			cout << "else " << z << endl;
		}

		cout << "Canal atual ->" << tv.getCanal() << endl;
	}

return 0;

}

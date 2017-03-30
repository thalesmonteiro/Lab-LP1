#include "relogio.h"
#include <iostream>

using namespace std;

Relogio::Relogio(int h, int m , int s){
	if(h < 0 || h > 24){
		cout << "Hora invalida" << endl;
	} else if(m < 0 || m > 60){
		cout << "Minuto invalido" << endl;
	} else if (s < 0 || s > 60){
		cout << "Segundo invalido" << endl;
	} else{
		setHorario(h, m, s);
	}

}

void Relogio::setHorario(int h, int m, int s){
	horas = h;
	minutos = m;
	segundos = s;
}

void Relogio::avancarHorario(){
	int h, m, s;

	h = getHoras();
	m = getMinutos();
	s = getSegundos();

	if(s < 60){
		setHorario(h, m, getSegundos() + 1);
	} else if(s == 60){
		setHorario(h, getMinutos() + 1, 0);

		if(m == 60){
			setHorario(getHoras() + 1, 0, 0);
		}

		if(h < 24){
			setHorario(h, m, s);
		} else if(h == 24){
			setHorario(0, 0, 0);
		} 
	}


	

	

	
	
}
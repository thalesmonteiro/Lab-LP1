#ifndef RELOGIO_H
#define RELOGIO_H
#include <iostream>

using namespace std;

class Relogio{

private:
	int segundos;
	int minutos;
	int horas;

public: 
	Relogio(int, int, int); //Método construtor
	
	void setHorario(int, int, int);
	
	int getHoras() {return horas;};
	int getMinutos() {return minutos;};
	int getSegundos() {return segundos;}; 
	
	void avancarHorario();
};

#endif
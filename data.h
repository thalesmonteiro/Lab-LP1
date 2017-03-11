#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class Data{

private:
	int dia;
	int mes;
	int ano;

public:

	Data(int, int, int); //metodo construtor 
	
	void setDia(int);
	void setMes(int);
	void setAno(int);

	int getDia() { return dia; };
	int getMes() { return mes; };
	int getAno() { return ano; };

	void avancarDia();
};


#endif
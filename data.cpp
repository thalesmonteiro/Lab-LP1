#include <iostream>

using namespace std;


class Data
{

private:
	int dia;
	int mes;
	int ano;

public:

	Data(int, int, int);
	void setDia(int);
	void setMes(int);
	void setAno(int);

	int getDia() { return dia; };
	int getMes() { return mes; };
	int getAno() { return ano; };

	void avancarDia();

};
void Data::avancarDia(){
	
	if(getMes() == 2){
		if(getDia() < 28){
			setDia(getDia() + 1);
		}else{ 
			//implementar
		}
	}
}
Data::Data(int a, int m, int d){
	setAno(a);
	setMes(m);
	if(m == 2){
		if(dia <= 28){
			setDia(d);
	}

	if(m == 4 || m == 6 || m == 9 || m == 11){
		if(dia <= 30){
			setDia(d);
		}
	}
}

void Data::setDia(int d)
{
	//this->dia = dia;
	if(d <= 31 && d >= 1){
		dia = d;
	}else{
		cout << "Dia invalido" << endl;
	}
}

void Data::setMes(int m){
	if(m <= 12 && m >= 1){
		mes = m;
	}else{
		cout << "Mes invalido" << endl;
	}
}

void Data::setAno(int a){
	ano = a;
}


int main(){
	int dia, mes, ano;
	cin >> dia >> mes >> ano;
	Data dataTest(dia, mes, ano);

	cout << dataTest.getAno() << endl;

}
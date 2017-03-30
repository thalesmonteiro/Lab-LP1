#include "relogio.h"
#include <iostream>

using namespace std;

int main(void)
{
	int hr, min, seg;

	cout << "Digite a hr (1 a 24): " << endl;
	cin >>  hr;

	cout << "Digite o minuto: " << endl;
	cin >> min;

	cout << "Digite o segundo: " << endl;
	cin >> seg;

	Relogio r(hr, min, seg);

	r.avancarHorario();

	cout << r.getHoras() << " : ";
	cout << r.getMinutos() << " : ";
	cout << r.getSegundos() << endl;


	return 0;
}
#include <iostream>
#include <string>
#include "empregado.h"

using namespace std;
//conjunto de arquivos (main2.cpp, empregado.h empregado.cpp)

int main(){

	string nome;
	string sobrenome;
	float salario;

	cout << "Cadastro de Empregados" << endl;

	cout << "Digite o nome: ";
	cin >> nome;
	cout << "Digite o sobrenome: ";
	cin >> sobrenome;
	cout << "Digite o salario mensal: ";
	cin >> salario;

	Empregado(nome,sobrenome,salario);

	Empregado funcionario1(nome,sobrenome,salario);
	cout << endl;
	cout << "Digite o nome: ";
	cin >> nome;
	cout << "Digite o sobrenome: ";
	cin >> sobrenome;
	cout << "Digite o salario mensal: ";
	cin >> salario;

	Empregado funcionario2(nome,sobrenome,salario);

	cout << "\nNome\tSalario anual" << endl; 
	cout << "" << funcionario1.getNome() << "\t    " << funcionario1.getSalario() << endl; 
	cout << ""<< funcionario2.getNome() << "\t    " << funcionario2.getSalario() << endl;

	cout << "\nFuncionarios " << funcionario1.getNome() << " e " << funcionario2.getNome() << " receberam um aumento de 10% " << endl;
	cout << "Salario anual de " << funcionario1.getNome() << ": R$ " << ((funcionario1.getSalario() + (funcionario1.getSalario() /10)) * 12 ) << endl;
	cout << "Salario anual de " << funcionario2.getNome() << ": R$ " << ((funcionario2.getSalario() + (funcionario2.getSalario() /10)) * 12 ) << endl;


	return 0;
}
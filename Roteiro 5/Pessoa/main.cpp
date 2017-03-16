#include "pessoa.h"

int main(){

	string nome;
	int idade, telefone;

	cout << "Cadastro de Pessoas" << endl;
	cout <<"Digite o nome: ";
	cin >> nome;
	cout << "Digite a idade: ";
	cin >> idade;
	cout << "Digite o telefone: ";
	cin >> telefone;
	cout << endl;;
	Pessoa(nome,idade,telefone);

	Pessoa pessoa1(nome,idade,telefone);
	Pessoa pessoa2(nome,idade,telefone);
	Pessoa pessoa3(nome);

	pessoa2.setNome("Paula");
	pessoa2.setIdade(19);
	pessoa2.setTelefone(987654321);
 	
	pessoa3.setNome("Pedro");

	cout << "\tPessoas cadastradas" << endl;
	cout << " 1- Nome: " << pessoa1.getNome() << " idade: " << pessoa1.getIdade() << " telefone: " << pessoa1.getTelefone() << endl;
	cout << " 2- Nome: " << pessoa2.getNome() << " idade: " << pessoa2.getIdade() << " telefone: " << pessoa2.getTelefone() << endl;
	cout << " 3- Nome: " << pessoa3.getNome() << endl;
	return 0;
}
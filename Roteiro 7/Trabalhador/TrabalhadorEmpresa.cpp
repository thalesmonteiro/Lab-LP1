#include "TrabalhadorEmpresa.h"
#include <iostream>


void TrabalhadorEmpresa::CadastrarFuncionario(){
	string nome;
	double salario;
	int opcao;
	int hora;
       
	cout << "\tRelatório de funcionario\n" << endl;
	cout << "Informe o tipo de remuneração:\n1- Trabalhador Assalariado\n2- Trabalahador por hora\nOpcao: ";
	cin >> opcao;
    cout << "Nome do funcionario: ";
	cin >> nome;
	cout << "Salario base mensal: ";
	cin >> salario;
	
	switch (opcao){
	    case 1: 
	        trabalhador_sal = new TrabalhadorAssalariado(nome, salario);
		    cout << "Salario mensal total: " << trabalhador_sal->calcularPagamento() << endl;
		    break;
		    
	    case 2: 
	        cout << "Horas trabalhadas: ";
	        cin >> hora;
	        trabalhador_hora = new TrabalhadorPorHora(nome, salario);
		    cout << "Salario mensal total:" <<  trabalhador_hora->calcularPagamento(hora) << endl;
		    break;
	    default:
	        cout << "Opção invalida";
	        break;
	}
}
	
	

	




#include "Empresa.h"
Empresa::Empresa(){

}

void Empresa::setFuncionario(){
    string nome,
              matricula;
    double salario;

    cout << "Nome: ";
    cin >> nome;
    cout << "Matricula: ";
    cin >> matricula;
    cout << "Salario: ";
    cin >> salario;

    funcionario.setNome(nome);
    funcionario.setMatricula(matricula);
    funcionario.setSalario(salario);

}

void Empresa::consultar(){
    double percentual = 0.0;

    cout << "Informe o percentual de acrescimo no salario: ";
    cin >> percentual;

    if(percentual <= 0){
        consultor.getSalario();
    }else{
        consultor.setSalario(percentual);
    }


}
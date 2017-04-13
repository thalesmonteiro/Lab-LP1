#include "Funcionario.h"

Funcionario::Funcionario(){

}

Funcionario::Funcionario(string nome, string matricula , double  salario){
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
}

void Funcionario::setMatricula(string matricula){
    this-> matricula = matricula;
}

string Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setNome(string nome){
    this-> nome = nome;
}

string Funcionario::getNome(){
    return nome;
}

void Funcionario::setSalario(double salario){
    this-> salario = salario;
}

double Funcionario::getSalario(){
    return salario;
}

#include "Funcionario.h"

Funcionario::Funcionario()
{

}

Funcionario::~Funcionario()
{
 
}

void Funcionario::setNome(string n){

    nome = n;

}

void Funcionario::setMatricula(int m){

    matricula = m;

}

int Funcionario::getMatricula(){

    return matricula;

}

string Funcionario::getNome(){

    return nome;

}

#include <sstream>
#include <iomanip>
#include "Medico.h"

Medico::Medico(string nome, double altura, double peso) {
    this->nome = nome;
    this->altura = altura;
    this->peso = peso;
}

string Medico::toString() {
    stringstream altura,
                 peso;
                 
    altura << fixed << setprecision(2) << this->altura;
    peso << fixed << setprecision(2) << this->peso;
    
    return "Nome: " + nome + "\nAltura: " + altura.str() + "\nPeso: " + peso.str();
}

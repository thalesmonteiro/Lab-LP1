#include "ContaEspecial.h"

void ContaEspecial::definirLimite(){
 setLimite(3 * getSalarioMensal());
}

ContaEspecial::ContaEspecial(string nome, double salario, double numero, double saldo) : Conta(nome, salario, numero, saldo){
    definirLimite();
}

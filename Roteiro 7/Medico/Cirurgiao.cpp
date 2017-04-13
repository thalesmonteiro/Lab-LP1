#include <iostream>
#include "Cirurgiao.h"

Cirurgiao::Cirurgiao(string nome, double altura, double peso, string area) : Medico(nome, altura, peso) {
    this->area = area;
}

void Cirurgiao::realizaOperacao() {
    cout << "Realiza Cirurgia.";
}

string Cirurgiao::toString() {
    return Medico::toString() + "\nArea: " + area;
}

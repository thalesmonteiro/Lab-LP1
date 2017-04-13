#include <iostream>
#include "Otorrino.h"

Otorrino::Otorrino(string nome, double altura, double peso, string area) : Medico(nome, altura, peso) {
    this->area = area;
}

void Otorrino::realizaOperacao() {
    cout << "Realiza Exame nos Sentidos.";
}

string Otorrino::toString() {
    return Medico::toString() + "\nArea: " + area;
}

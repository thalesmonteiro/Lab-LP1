#include <iostream>
#include "Oftamologista.h"

Oftamologista::Oftamologista(string nome, double altura, double peso, string area) : Medico(nome, altura, peso) {
    this->area = area;
}

void Oftamologista::realizaOperacao() {
    cout << "Realiza Exame no Globo Ocular.";
}

string Oftamologista::toString() {
    return Medico::toString() + "\nArea: " + area;
}

#include <iostream>
#include "Ginecologista.h"

Ginecologista::Ginecologista(string nome, double altura, double peso, string area) : Medico(nome, altura, peso) {
    this->area = area;
}

void Ginecologista::realizaOperacao() {
    cout << "Realiza Exame Ginecológico.";
}

string Ginecologista::toString() {
    return Medico::toString() + "\nArea: " + area;
}

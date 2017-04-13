#ifndef OTORRINO_H
#define OTORRINO_H

#include <string>
#include "Medico.h"

using namespace std;

class Otorrino : public Medico {
    private:
        string area;

    public:
        Otorrino(string, double, double, string);
        void realizaOperacao();
        string toString();
};

#endif //OTORRINO_H

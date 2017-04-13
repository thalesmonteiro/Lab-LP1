#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include <string>
#include "Medico.h"

using namespace std;

class Ginecologista : public Medico {
    private:
        string area;
        
    public:
        Ginecologista(string, double, double, string);
        void realizaOperacao();
        string toString();
};

#endif //GINECOLOGISTA_H

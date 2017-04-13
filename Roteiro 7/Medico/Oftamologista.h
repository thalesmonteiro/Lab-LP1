#ifndef OFTAMOLOGISTA_H
#define OFTAMOLOGISTA_H

#include <string>
#include "Medico.h"

using namespace std;

class Oftamologista : public Medico {
    private:
        string area;
    
    public:
        Oftamologista(string, double, double, string);
        void realizaOperacao();
        string toString();
};

#endif //OFTAMOLOGISTA_H

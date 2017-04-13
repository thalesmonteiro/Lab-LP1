#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include <string>
#include "Medico.h"

using namespace std;

class Cirurgiao : public Medico {
    private:
        string area;
        
    public:
        Cirurgiao(string, double, double, string);
        void realizaOperacao();
        string toString();
};

#endif //CIRURGIAO_H

#ifndef MEDICO_H
#define MEDICO_H

using namespace std;

class Medico {
    private:
        string nome;
        double altura,
               peso;
               
    public:
        Medico(string, double, double);
        virtual void realizaOperacao() = 0;
        virtual string toString();
};

#endif //MEDICO_H

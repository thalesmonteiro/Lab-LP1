#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        virtual double calcularSalario() = 0;
        void setMatricula(int m);
        int getMatricula();
        void setNome(string n);
        string getNome();
    protected:
        string nome;
        int matricula;

};

#endif

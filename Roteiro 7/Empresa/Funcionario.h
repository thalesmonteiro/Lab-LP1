#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario{

private:
    string matricula;
    string nome;
    double salario;

public:

    Funcionario();
    Funcionario(string,string,double);
    void setMatricula(string);
    string getMatricula();
    void setNome(string);
    string getNome();
    void setSalario(double);
    virtual double getSalario();
};

#endif
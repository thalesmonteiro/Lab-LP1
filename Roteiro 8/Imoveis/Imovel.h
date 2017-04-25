#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include "Endereco.h"

using namespace std;

class Imovel{
protected:
    Endereco endereco;
public:
    Imovel();
    Endereco getEndereco();
    void setEndereco(Endereco);
    virtual string getDescricao() = 0;
};

#endif
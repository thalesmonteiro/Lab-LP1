#ifndef TERRENO_H
#define TERRENO_H
#include <string>
#include "Imovel.h"
#include "Endereco.h"

using namespace std;

class Terreno : public Imovel{
private:
    double area;

public:
    Terreno();
    Terreno(double, Endereco);
    string getDescricao();
    void setArea(double);
    double getArea();
};
#endif
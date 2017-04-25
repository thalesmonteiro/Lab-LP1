#ifndef CASA_H
#define CASA_H
#include <string>
#include "Imovel.h"

using namespace std;

class Casa : public Imovel{
private:
    int numeroDePavimentos;
    int quantidadeDeQuartos;
    double areaDoTerreno;
    double areaConstruida;

public:
    Casa();
    Casa(int, int, double, double, Endereco);
    string getDescricao();
    void setNumeroDePavimentos(int);
    int getNumeroDePavimentos();
    void setQuantidadeDeQuartos(int);
    int getQuantidadeDeQuartos();
    void setAreaDoTerreno(double);
    double getAreaDoTerreno();
    void setAreaConstruida(double);
    double getAreaConstruida();

};

#endif
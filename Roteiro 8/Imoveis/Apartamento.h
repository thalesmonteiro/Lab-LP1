#ifndef  APARTAMENTO_H
#define APARTAMENTO_H

#include <string>
#include "Imovel.h"

using namespace std;

class Apartamento : public Imovel{
private:
    string posicao;
    double valorDoCondominio;
    int numeroDeVagasNaGaragem;
public:
    Apartamento();
    Apartamento(string, double, int, Endereco );
    string getDescricao();
    void setPosicao(string);
    string getPosicao();
    void setValorDoCondominio(double);
    double getValorDoCondominio();
    void setNumeroDeVagasNaGaragem(int);
    int getNumeroDeVagasNaGaragem();
};

#endif
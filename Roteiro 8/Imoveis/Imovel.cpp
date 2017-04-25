#include "Imovel.h"

Imovel::Imovel(){

}

Endereco Imovel::getEndereco(){
    return endereco;
}

void Imovel::setEndereco(Endereco end)
{
    endereco = end;
}
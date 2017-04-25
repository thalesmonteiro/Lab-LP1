#include "Casa.h"
#include <string>

Casa::Casa(int num, int quartos, double area, double areaC, Endereco end) {
    setNumeroDePavimentos(num);
    setQuantidadeDeQuartos(quartos);
    setAreaDoTerreno(area);
    setAreaConstruida(areaC);

    setEndereco(end);

}

Casa::Casa(){
}


string Casa::getDescricao(){
    string descricao;
    string endereco;
    string num = to_string(getEndereco().getNumero());
    string numPav = to_string(numeroDePavimentos);
    string numQuartos = to_string(quantidadeDeQuartos);
    string areaTerr = to_string(areaDoTerreno);
    string areaCons = to_string(areaConstruida);

    endereco = "Endereco:\nRua: " + getEndereco().getLogradouro() + "\nBairro: " + getEndereco().getBairro() + "\nNum: " + num + "\nCidade: " + getEndereco().getCidade() + "\nCep: " + getEndereco().getCep() ;

    descricao = endereco + "\nNumero de Pavimentos: " + numPav + "\nQuantidade de Quartos:" + numQuartos + "\nArea do Terreno:" + areaTerr + "\nArea Construida" + areaCons;

    return descricao;
}
void Casa::setNumeroDePavimentos(int numeroDePavimentos){
    this->numeroDePavimentos = numeroDePavimentos;
}
int Casa::getNumeroDePavimentos(){
    return numeroDePavimentos;
}
void Casa::setQuantidadeDeQuartos(int quantidadeDeQuartos){
    this->quantidadeDeQuartos = quantidadeDeQuartos;
}
int Casa::getQuantidadeDeQuartos(){
    return quantidadeDeQuartos;
}
void Casa::setAreaDoTerreno(double areaDoTerreno){
    this->areaDoTerreno = areaDoTerreno;
}
double Casa::getAreaDoTerreno(){
    return areaDoTerreno;
}
void Casa::setAreaConstruida(double areaConstruida){
    this->areaConstruida = areaConstruida;
}
double Casa::getAreaConstruida(){
    return areaConstruida;
}
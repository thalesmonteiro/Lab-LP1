#include "Terreno.h"
#include <stdio.h>
#include <string>
using namespace std;

Terreno::Terreno(){

}

Terreno::Terreno(double area, Endereco end){
    setArea(area);
    setEndereco(end);
}

string Terreno::getDescricao(){
    string descricao;
    string endereco;
    string num = to_string(getEndereco().getNumero());
    string ar = to_string(area);

    endereco = "Endereco:\nRua: " + getEndereco().getLogradouro() + "\nBairro: " + getEndereco().getBairro() + "\nNum: " + num + "\nCidade: " + getEndereco().getCidade() + "\nCep: " + getEndereco().getCep() ;

    descricao = endereco + "\nArea Construida: " + ar;

    return descricao;
}

void Terreno::setArea(double area){
    this-> area = area;
}

double Terreno::getArea(){
    return area;
}

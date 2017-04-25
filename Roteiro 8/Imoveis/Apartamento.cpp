#include "Apartamento.h"
#include <iostream>

Apartamento::Apartamento(){

}

Apartamento::Apartamento(string pos, double valor, int num, Endereco end){
    setPosicao(pos);
    setValorDoCondominio(valor);
    setNumeroDeVagasNaGaragem(num);
    setEndereco(end);

}

string Apartamento::getDescricao(){
    string descricao;
    string endereco;
    string num = to_string(getEndereco().getNumero());
    string valor = to_string(valorDoCondominio);
    string numVagas = to_string(numeroDeVagasNaGaragem);


    endereco = "Endereco:\nRua: " + getEndereco().getLogradouro() + "\nBairro: " + getEndereco().getBairro() + "\nNum: " + num + "\nCidade: " + getEndereco().getCidade() + "\nCep: " + getEndereco().getCep() ;

    descricao = endereco + "\nValor do Condominio: " + valor + "\nVagas na garagem: " + numVagas;

    return descricao;
}

void Apartamento::setPosicao(string posicao){
    this->posicao = posicao;
}

string Apartamento::getPosicao(){
    return posicao;
}

void Apartamento::setValorDoCondominio(double valor){
    valorDoCondominio = valor;
}

double Apartamento::getValorDoCondominio(){
    return valorDoCondominio;
}

void Apartamento::setNumeroDeVagasNaGaragem(int vagas){
   numeroDeVagasNaGaragem = vagas;
}
int Apartamento::getNumeroDeVagasNaGaragem(){
     return numeroDeVagasNaGaragem;
}

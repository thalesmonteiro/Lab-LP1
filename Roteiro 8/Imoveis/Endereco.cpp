#include "Endereco.h"
#include <string>

Endereco::Endereco(){

}
Endereco::Endereco(string lograd, string b, int num, string cid, string c){
    setLogradouro(lograd);
    setBairro(b);
    setNumero(num);
    setCidade(cid);
    setCep(c);
}


string Endereco::getLogradouro(){
    return logradouro;
}
void Endereco::setLogradouro(string logradouro){
    this->logradouro =  logradouro;
}
string Endereco::getBairro(){
    return bairro;
}
void Endereco::setBairro(string bairro){
    this->bairro = bairro;
}
void Endereco::setNumero(int numero){
    this->numero = numero;
}
int Endereco::getNumero(){
    return numero;
}
void Endereco::setCidade(string cidade){
    this->cidade = cidade;
}
string Endereco::getCidade(){
    return cidade;
}
void Endereco::setCep(string cep){
    this->cep = cep;
}
string Endereco::getCep(){
    return cep;
}


#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco{
private:
    string logradouro;
    string bairro;
    int numero;
    string cidade;
    string cep;
public:
    Endereco();
    Endereco(string, string, int, string, string);
    void setLogradouro(string);
    string getLogradouro();
    void setBairro(string);
    string getBairro();
    void setNumero(int);
    int getNumero();
    void setCidade(string);
    string getCidade();
    void setCep(string);
    string getCep();
};

#endif

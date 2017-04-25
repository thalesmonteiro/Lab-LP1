#include "Imovel.h"
#include "Endereco.h"
#include "Terreno.h"
#include "Apartamento.h"
#include "Casa.h"
#include <iostream>
#include <string>
#define TAM 5

using namespace std;

int main(){

    Imovel *imoveis[TAM];
    imoveis[0] = new Casa(2,3,72.0,60.0, Endereco("Rua madalena" , "Rondonopolis", 106 , "Dalaran" , "58066786"));
    imoveis[1] = new Casa(1,2,60.0, 52.0,  Endereco("Rua madalena" , "Rondonopolis", 110, "Dalaran" , "58066786"));
    imoveis[2] = new Apartamento("sudoeste", 350.0 , 2,  Endereco("Rua das Laranjeiras" ,  "Manaira" , 605, "João Pessoa", "57014596"));
    imoveis[3] = new Terreno(320.0,  Endereco("Rua Maritano ", "Mangabeira 7", 240, "bayeux", "96854475"));
    imoveis[4] = new Terreno(250.0,  Endereco("Rua Maritano", "Mangabeira", 260, "bayeux", "96854475"));

   for(int i = 0; i < 5; i++){
        cout<< imoveis[i]->getDescricao() << endl;
        cout << "\n\n" ;
    }

    for(int i = 0; i < 5 ; i++){
        delete imoveis[i];
    }
    return 0;
}
#ifndef TRABALHADOREMPRESA_H
#define TRABALHADOREMPRESA_H
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"



class TrabalhadorEmpresa{

private:
	TrabalhadorAssalariado *trabalhador_sal;
	TrabalhadorPorHora *trabalhador_hora;

public:
   
	void CadastrarFuncionario();

};

#endif

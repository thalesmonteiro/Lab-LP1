#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Assalariados.h"
#include "Horistas.h"
#include "Comissionados.h"
#include "funcionarionaoexisteexception.h"


class SistemaGerenciaFolha{

    Funcionario* funcionario[3];

public:
    SistemaGerenciaFolha();
    virtual ~SistemaGerenciaFolha();
    void setFuncionarios(Funcionario *func, int i); 
    double calculaValorTotalFolha(); 
    double consultaSalarioFuncionario(int);

};

#endif

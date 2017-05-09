#include "SistemaGerenciaFolha.h"
#include "funcionarionaoexisteexception.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{

}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    for (int i = 0; i < 3; i++)
    {
        delete funcionario [i];
    }
}


void SistemaGerenciaFolha::setFuncionarios(Funcionario *func, int i){
    funcionario[i] = func;
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double total = 0;
    for (int i = 0; i < 3; i++){
        total += funcionario[i]->calcularSalario();
    }
    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int i){
    if(i >= 3){
        throw FuncionarioNaoExisteException();
    }else{
        return funcionario[i]->calcularSalario();
    }
}

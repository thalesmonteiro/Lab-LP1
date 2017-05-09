#include <iostream>
#include "Funcionario.h"
#include "Assalariados.h"
#include "Horistas.h"
#include "Comissionados.h"
#include "SistemaGerenciaFolha.h"

using namespace std;

int main()
{
    int matricula;
    SistemaGerenciaFolha sGerencia;

    sGerencia.setFuncionarios(new Assalariados(500), 0);
    sGerencia.setFuncionarios(new Horistas(38, 200), 1);
    sGerencia.setFuncionarios(new Comissionados(500, 50, 950), 2);

    cout << "Digite a matricula do funcionario para (0,1,2): ";
    cin >> matricula;

    try{
        sGerencia.consultaSalarioFuncionario(matricula);
    }
    catch(runtime_error &n){
     cout << n.what() << endl;
    }

    cout << "Valor pago ao funcionario: R$ " << sGerencia.consultaSalarioFuncionario(matricula);
    cout << "Total a ser pago aos funcionarios: R$ " << sGerencia.calculaValorTotalFolha() << endl;
    return 0;
}

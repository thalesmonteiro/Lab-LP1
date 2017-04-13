#include "Funcionario.h"
#include "Consultor.h"
#include <iostream>

class Empresa{

private:
    Funcionario funcionario;
    Consultor consultor;
public:
    void setFuncionario();
    Empresa();
    Empresa(Funcionario, Consultor);
    void consultar();
};

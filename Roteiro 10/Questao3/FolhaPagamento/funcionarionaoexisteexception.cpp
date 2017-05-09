#include "funcionarionaoexisteexception.h"
#include <stdexcept>

FuncionarioNaoExisteException::FuncionarioNaoExisteException() : std::runtime_error("Erro: Funcionario não existe"){

}
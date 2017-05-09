#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <stdexcept>

class FuncionarioNaoExisteException : std::runtime_error{
public:
	FuncionarioNaoExisteException();
};

#endif
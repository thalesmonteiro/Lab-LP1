#ifndef SALDOEXCEPTION_H
#define SALDOEXCEPTION_H
#include <stdexcept>

class SaqueNaoDisponivelException : public std::runtime_error{
public:
	SaqueNaoDisponivelException();
};

#endif


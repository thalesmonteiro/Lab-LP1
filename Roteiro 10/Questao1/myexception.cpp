#include "myexception.h"

ValorAbaixoException::ValorAbaixoException() : runtime_error("Erro: Valor abaixo"){}

ValorAcimaException::ValorAcimaException() : runtime_error("Erro: Valor acima"){}

ValorMuitoAcimaException::ValorMuitoAcimaException() :  runtime_error("Erro: Valor muito acima"){}
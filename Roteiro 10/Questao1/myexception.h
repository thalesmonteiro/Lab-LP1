#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H
#include <iostream>
#include <stdexcept>

class ValorAbaixoException : public std::runtime_error{

public:
	ValorAbaixoException();

};

class ValorAcimaException : public std::runtime_error{

public:
	ValorAcimaException();

};

class ValorMuitoAcimaException : public std::runtime_error{

public:
	ValorMuitoAcimaException();
};

#endif
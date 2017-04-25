#ifndef ICONTA_H
#define ICONTA_H
#include <string>

using namespace std;

class IConta{
public:
    virtual void sacar(double ) = 0;
    virtual void depositar(double) = 0;
};

#endif
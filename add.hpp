#ifndef ADD_HPP
#define ADD_HPP
#include "Instruccion.hpp"
#include <string>

class ADD: public Instruccion
{
    private:
        int operand1;
        int operand2;

    public: 
        ADD();
        ADD(string Name, int Code, int Lenght, int Op1, int Op2);
        int getOp1();
        int getOp2();
};

#endif

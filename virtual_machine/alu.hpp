#include "Instruccion.hpp"

#ifndef ALU_HPP
#define ALU_HPP
#include <string>

class ALU
{
    private:
        short int op1;
        short int op2;

    public:
        ALU();
        ALU(short int Op1, short int Op2);
        short int add(short int theOperand1, short int theOperand2);
};

#endif

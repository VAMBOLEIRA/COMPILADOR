#include "alu.hpp"

ALU::ALU () {}

ALU::ALU(short int theOperand1, short int theOperand2){
    op1 = theOperand1;
    op2 = theOperand2;
}

short int ALU::add(short int theOperand1, short int theOperand2){
    return theOperand1 + theOperand2;
}
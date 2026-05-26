#include "program.hpp"
Program::Program(){}

void Program::addInstruction(Instruccion theInstruction, int thePosition){
    instruccions[thePosition] = theInstruction;
}

Instruccion Program::getInstruccion(int thePosition){
    return instruccions[thePosition];
}

#include "cu.hpp"

CU::CU () {}

CU::CU(string Status){
    status = Status;
}

Instruccion CU::fetch(Program theProgram, int thePosition){
    return theProgram.getInstruccion(thePosition);
}
/*
int CU::decode(Instruccion* theInstruccion){
    
}*/

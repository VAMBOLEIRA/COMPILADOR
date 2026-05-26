#include "Instruccion.hpp"

#ifndef PROGRAM_HPP
#define PROGRAM_HPP
#include <string>

class Program
{
public:
    Instruccion instruccions[10];
    Program();
    void addInstruction(Instruccion theInstruccion, int position);
    Instruccion getInstruccion(int position);
};




#endif

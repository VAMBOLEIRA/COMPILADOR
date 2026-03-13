#include "Instruccion.hpp"
#include "program.hpp"
#include "alu.hpp"
#include "add.hpp"

#ifndef CU_HPP
#define CU_HPP
#include <string>

using namespace std;

class CU
{
    private:
        string status;
    public:
        CU();
        CU(string Status);
        Instruccion fetch(Program theProgram, int thePosition);
        void execute(int theCode);
};

#endif
#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "registers.h"

class Instruction
{
    public:
        Instruction(int,int,int);
        ~Instruction();
        void disassemble();
        void execute(Registers *);

    protected:

    private:
        int a;
        int b;
        int c;
};

#endif // INSTRUCTION_H

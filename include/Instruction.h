#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "registers.h"
#include <iostream>

using namespace std;

class Instruction
{
    public:
        Instruction(int a1, int b1, int c1) {
            a = a1;
            b = b1;
            c = c1;
        }
//        virtual ~Instruction();
        virtual void disassemble()=0;
        virtual int execute(Registers *)=0;

    protected:
        int a;
        int b;
        int c;
};

class AddInstruction : public Instruction
{
    public:
        AddInstruction(int a1, int b1, int c1): Instruction(a1,b1,c1){}

        int execute(Registers *r) {
            r->setRegister(a, r->getRegister(b) + r->getRegister(c));
            r->setPC(r->getPC() + 1);
            return r->getPC();
        }
        void disassemble() {
            cout << "add r" << a << ", r" << b << ", r" << c << endl;
        }

    protected:

    private:
};

class SubInstruction : public Instruction
{
    public:
        SubInstruction(int a1, int b1, int c1): Instruction(a1,b1,c1){}

        int execute(Registers *r) {
            r->setRegister(a, r->getRegister(b) - r->getRegister(c));
            r->setPC(r->getPC() + 1);
            return r->getPC();
        }
        void disassemble() {
            cout << "sub r" << a << ", r" << b << ", r" << c << endl;
        }

    protected:

    private:
};

class OriInstruction : public Instruction
{
    public:
        OriInstruction(int a1, int b1, int c1): Instruction(a1,b1,c1){}

        int execute(Registers *r) {
            r->setRegister(a, r->getRegister(b) | c);
            r->setPC(r->getPC() + 1);
            return r->getPC();
        }
        void disassemble() {
            cout << "ori r" << a << ", r" << b << ", " << c << endl;
        }

    protected:

    private:
};


class BrneInstruction : public Instruction
{
    public:
        BrneInstruction(int a1, int b1, int c1): Instruction(a1,b1,c1){}

        int execute(Registers *r) {
            if (r->getRegister(a) != r->getRegister(b)) {
                r->setPC(r->getPC() + 1 + c);
            } else {
                r->setPC(r->getPC() + 1);
            }
            return r->getPC();
        }

        void disassemble() {
            cout << "brne r" << a << ", r" << b << ", " << c << endl;
        }

    protected:

    private:
};

#endif // INSTRUCTION_H

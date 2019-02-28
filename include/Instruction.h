#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "registers.h"

class Instruction
{
    public:
        Instruction(int a1, int b1, int c1) {
            a = a1;
            b = b1;
            c = c1;
        }
        virtual ~Instruction();
        virtual void disassemble();
        virtual int execute(Registers *);

    protected:
        int a;
        int b;
        int c;
};

class AddInstruction : public Instruction
{
    public:
        int execute(Registers *r) {
            r->setRegister(a, r->getRegister(b) + r->getRegister(c));
            r->setPC(r->getPC() + 1);
            return r->getPC();
        };
        void disassemble() {

        };

    protected:

    private:
};

class SubInstruction : public Instruction
{
    public:
        int execute(Registers *r) {
            r->setRegister(a, r->getRegister(b) - r->getRegister(c));
            r->setPC(r->getPC() + 1);
            return r->getPC();
        };
        void disassemble() {

        };

    protected:

    private:
};

class OriInstruction : public Instruction
{
    public:
        int execute(Registers *r) {
            r->setRegister(a, r->getRegister(b) | 10);
            r->setPC(r->getPC() + 1);
            return r->getPC();
        };
        void disassemble() {

        };

    protected:

    private:
};


class BrneInstruction : public Instruction
{
    public:
        int execute(Registers *r) {
            if (a != b) {
                r->setPC(r->getPC() + 1 - 4);
            } else {
                r->setPC(r->getPC() + 1);
            }
            return r->getPC();
        };
        void disassemble() {

        };

    protected:

    private:
};

#endif // INSTRUCTION_H

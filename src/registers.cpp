#include <iostream>
#include "registers.h"

using namespace std;

Registers::Registers()
{
    for (int i = 0; i < 32; i++) {
        data[i] = 0;
    }
}

void Registers::print()
{
    for (int i = 0; i < 32; i++)
    {
        cout << "regNum: " << i << ", value: " << data[i] << endl;
    }
    cout << "PC: " << pc << endl;
}

void Registers::setRegister(int regNum, int value)
{
    if (regNum == 0)
    {
        return;
    }
    else
    {
        data[regNum] = value;
    }
}

int Registers::getRegister(int regNum)
{
    return data[regNum];
}

void Registers::setPC(int value)
{
    pc = value;
}

int Registers::getPC()
{
    return pc;
}

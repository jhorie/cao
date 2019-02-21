#include <iostream>
#include "math.h"
#include "Program.h"
#include "Computer.h"


using namespace std;

Program::Program(int numArith, int numStore, int numLoad, int numBranch)
{
    this->numArith = numArith;
    this->numStore = numStore;
    this->numLoad = numLoad;
    this->numBranch = numBranch;
    this->numTotal = numArith + numStore + numLoad + numBranch;
}

Program::Program(int totalInstructions, double fracArith, double fracStore, double fracLoad)
{
    this->numArith = totalInstructions * fracArith;
    this->numStore = totalInstructions * fracStore;
    this->numLoad = totalInstructions * fracLoad;
    this->numBranch = round(totalInstructions * (1 - fracLoad - fracArith - fracStore));
    this->numTotal = totalInstructions;
}

void Program::printStats()
{
    cout << "Num Arith: " << numArith << endl;
    cout << "Num Store: " << numStore << endl;
    cout << "Num Load: " << numLoad << endl;
    cout << "Num Branch: " << numBranch << endl;
    cout << "Num Total: " << numTotal << endl;
}

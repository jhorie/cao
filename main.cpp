#include <iostream>
#include "Computer.h"
#include "Program.h"

using namespace std;


void printCompAndProgram(Computer *c, Program *p)
{
    cout << c->calculateExecutionTime(p) << " seconds" << endl;
}

void printCompAndProgramMIPS(Computer *c, Program *p)
{
    cout << c->calculateMIPS(p) << " mips rating" << endl;
}

int main()
{
    Computer comp1 = Computer(1, 2, 2, 3, 4);
    Computer comp2 = Computer(1.2, 2, 3, 4, 3);
    Computer comp3 = Computer(2, 2, 2, 4, 6);

    Program prog1 = Program(2000, 100, 100, 50);
    Program prog2 = Program(2000, 0.1, 0.4, .25);
    Program prog3 = Program(500, 100, 2000, 200);

    cout << "This is computer 1:" << endl;
    comp1.printStats();
    cout << endl << "This is mips value of computer 1: " << comp1.calculateMIPS() << endl;

    cout << endl << "This is computer 2:" << endl;
    comp2.printStats();
    cout << endl << "This is mips value of computer 2: " << comp2.calculateMIPS() << endl;

    cout << endl << "This is computer 3:" << endl;
    comp3.printStats();
    cout << endl << "This is mips value of computer 3: " << comp3.calculateMIPS() << endl;

    cout << endl << "Executions times:" << endl << endl;

    cout << "This is computer 1 and program 1: " << endl;
    printCompAndProgram(&comp1, &prog1);
    cout << "This is computer 1 and program 2: " << endl;
    printCompAndProgram(&comp1, &prog2);
    cout << "This is computer 1 and program 3: " << endl;
    printCompAndProgram(&comp1, &prog3);

    cout << "This is computer 2 and program 1: " << endl;
    printCompAndProgram(&comp2, &prog1);
    cout << "This is computer 2 and program 2: " << endl;
    printCompAndProgram(&comp2, &prog2);
    cout << "This is computer 2 and program 3: " << endl;
    printCompAndProgram(&comp2, &prog3);

    cout << "This is computer 3 and program 1: " << endl;
    printCompAndProgram(&comp3, &prog1);
    cout << "This is computer 3 and program 2: " << endl;
    printCompAndProgram(&comp3, &prog2);
    cout << "This is computer 3 and program 3: " << endl;
    printCompAndProgram(&comp3, &prog3);

    cout << endl << "MIPS ratings:" << endl << endl;

    cout << "This is computer 1 and program 1: " << endl;
    printCompAndProgramMIPS(&comp1, &prog1);
    cout << "This is computer 1 and program 2: " << endl;
    printCompAndProgramMIPS(&comp1, &prog2);
    cout << "This is computer 1 and program 3: " << endl;
    printCompAndProgramMIPS(&comp1, &prog3);

    cout << "This is computer 2 and program 1: " << endl;
    printCompAndProgramMIPS(&comp2, &prog1);
    cout << "This is computer 2 and program 2: " << endl;
    printCompAndProgramMIPS(&comp2, &prog2);
    cout << "This is computer 2 and program 3: " << endl;
    printCompAndProgramMIPS(&comp2, &prog3);

    cout << "This is computer 3 and program 1: " << endl;
    printCompAndProgramMIPS(&comp3, &prog1);
    cout << "This is computer 3 and program 2: " << endl;
    printCompAndProgramMIPS(&comp3, &prog2);
    cout << "This is computer 3 and program 3: " << endl;
    printCompAndProgramMIPS(&comp3, &prog3);

    return 0;
}


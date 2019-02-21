//#include "simulator.h"
//#include "program.h"
#include "registers.h"
#include <iostream>

using namespace std;

//void loadProgram (Program *program)
//{
//	program->appendInstruction (new OriInstruction (1, 0, 12));
//	program->appendInstruction (new OriInstruction (2, 0, 4));
//	program->appendInstruction (new OriInstruction (3, 0, 1));
//	program->appendInstruction (new AddInstruction (4, 4, 1));
//	program->appendInstruction (new SubInstruction (2, 2, 3));
//	program->appendInstruction (new BrneInstruction (2, 0, -3));
//}


int main (void)
{
	Registers *registers = new Registers();
//	Program	*program	= new Program ();

//	loadProgram (program);

//	Simulator theSimulator = Simulator (registers, program);

//	theSimulator.ui ();

    for (int i = 0; i < 32; i = i + 2) {
        registers->setRegister(i, i*2);
    }

    registers->print();

    cout << endl << endl << "Lets check what is in register 12 (13th): " << registers->getRegister(12) << endl;
    cout << endl << endl << "Lets check what is in register 13 (14th): " << registers->getRegister(13) << endl;

    delete(registers);
	return 0;
}

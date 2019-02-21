#include <iostream>
#include "Computer.h"
#include "Program.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Computer *comp = new Computer(1,3,3,4,1);
    comp->printStats();

    Program *p = new Program(1000,0.5,0.1,0.1);
    p->printStats();
    p = new Program(1000, 200, 500, 300);
    p->printStats();

    Computer *comp1 = new Computer(1, 2, 2, 3, 4);
    Computer *comp2 = new Computer(1.2, 2, 3, 4, 3);
    Computer *comp3 = new Computer(2, 2, 2, 4, 6);

    Program *prog1 = new Program(2000, 100, 100, 50);
    Program *prog2 = new Program(2000, 0.1, 0.4, .25);
    Program *prog3 = new Program(500, 100, 2000, 200);

    return 0;
}

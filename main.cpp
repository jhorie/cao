#include <iostream>
#include "Computer.h"
#include "Program.h"

using namespace std;

int main()
{
    cout << "This is program 1:" << endl;
    Program *p = new Program(2000,100,100,50);
    p->printStats();
    cout << endl << "This is program 2:" << endl;
    p = new Program(2000,0.1,0.4,0.25);
    p->printStats();

    return 0;
}

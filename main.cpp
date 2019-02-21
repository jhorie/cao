#include <iostream>
#include "Computer.h"
#include "Program.h"

using namespace std;

int main()
{

    cout << "This is computer 1: " << endl;
    Computer *comp1 = new Computer(1,3,3,4,1);
    comp1->printStats();
    cout << endl << "This is computer 2: " << endl;
    Computer *comp2 = new Computer(4,3,6,8,9);
    comp2->printStats();


    return 0;
}

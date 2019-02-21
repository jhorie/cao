#include <iostream>
#include "Computer.h"

using namespace std;

Computer::Computer(double clockRateGhz, double cpiArith, double cpiStore, double cpiLoad, double cpiBranch)
{
    this->clockRateGhz = clockRateGhz;
    this->cpiArith = cpiArith;
    this->cpiStore = cpiStore;
    this->cpiLoad = cpiLoad;
    this->cpiBranch = cpiBranch;
}

void Computer::printStats()
{
    cout << "Clock Rate GHz: " << clockRateGhz << endl;
    cout << "CPI Arith: " << cpiArith << endl;
    cout << "CPI Store: " << cpiStore << endl;
    cout << "CPI Load: " << cpiLoad << endl;
    cout << "CPI Branch: " << cpiBranch << endl;
    cout << "Global CPI: " << calculateGlobalCPI() << endl;
}

double Computer::calculateGlobalCPI()
{
    return (cpiArith + cpiStore + cpiLoad + cpiBranch) / 4.0;
}

double Computer::calculateExecutionTime(Program *p)
{
return 1.1;
}

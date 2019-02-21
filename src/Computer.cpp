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
    double cycles = p->numArith * cpiArith + p->numStore * cpiStore + p->numLoad * cpiLoad + p->numBranch * cpiBranch;
    return cycles / (this->clockRateGhz * 1000000000);
}

double Computer::calculateMIPS()
{
    return 1000 * clockRateGhz / calculateGlobalCPI();
}

double Computer::calculateMIPS(Program *p)
{
    return 1000 * clockRateGhz / ((p->numArith * cpiArith + p->numBranch * cpiBranch + p->numLoad * cpiLoad + p->numStore * cpiStore) / p->numTotal);
}

#ifndef COMPUTER_H
#define COMPUTER_H
#include "Program.h"

class Computer
{
    public:
        Computer(double, double, double, double, double);

        double clockRateGhz;
        double cpiArith;
        double cpiStore;
        double cpiLoad;
        double cpiBranch;

        void printStats();
        double calculateGlobalCPI();
        double calculateExecutionTime(Program *);
        double calculateMIPS();
        double calculateMIPS(Program);

    protected:

    private:

};

#endif // COMPUTER_H

#ifndef PROGRAM_H
#define PROGRAM_H


class Program
{
    public:
        Program(int, int, int, int);
        Program(int, double, double, double);

        int numArith;
        int numStore;
        int numLoad;
        int numBranch;
        int numTotal;
        void printStats();

    protected:

    private:
};

#endif // PROGRAM_H

#ifndef _REGISTERS_H_
#define _REGISTERS_H_

class Registers
{
private:
    int data[];
    int pc;
public:
    Registers();
    void setRegister(int regNum,int value);
    int getRegister(int regNum);
    void setPC(int value);
    int getPC();

    void print();
};

#endif	/* _REGISTERS_H_ */

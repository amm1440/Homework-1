// header file for Calculator class
#ifndef CALCULATOR_H
#define CALCULATOR_H



class Calculator
{

    public:
        void run();

    private:
        void addRnums();
        void subRnums();
        void multiRnums();
        void divRnums();
        int factorial(int);
        void doFactorial();
        int menu(int);
};

#endif

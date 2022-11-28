#include "Calculator.h"

int main()
{
    Calculator *calc = new Calculator();
    calc->run();
    delete calc;
}

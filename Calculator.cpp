#include <iostream>
#include <iomanip>
#include "Calculator.h"

using namespace std;

//addRnums is a function that ask the user for two values adds them and print the two decimal rounded answer
void Calculator::addRnums()
{
    float valueOne, valueTwo;

    cout << "Enter 1st value: ";
    cin >> valueOne;
    cout << "Enter 2nd value: ";
    cin >> valueTwo;
    cout << valueOne << " + " << valueTwo << " = " << setprecision(2)<< valueOne + valueTwo << "\n";
}

//addRnums is a function that ask the user for two values adds them and print the two decimal rounded answer
void Calculator::subRnums()
{
    float valueOne, valueTwo;

    cout << "Enter 1st value: ";
    cin >> valueOne;
    cout << "Enter 2nd value: ";
    cin >> valueTwo;
    cout << valueOne << " - " << valueTwo << " = " << setprecision(2)<< valueOne - valueTwo << "\n";

}

//addRnums is a function that ask the user for two values adds them and print the two decimal rounded answer
void Calculator::multiRnums()
{
    float valueOne, valueTwo;

    cout << "Enter 1st value: ";
    cin >> valueOne;
    cout << "Enter 2nd value: ";
    cin >> valueTwo;
    cout << valueOne << " * " << valueTwo << " = " << setprecision(2)<< valueOne * valueTwo << "\n";

}

//addRnums is a function that ask the user for two values adds them and print the two decimal rounded answer
void Calculator::divRnums()
{
    float valueOne, valueTwo;

    cout << "Enter 1st value: ";
    cin >> valueOne;
    cout << "Enter 2nd value: ";
    cin >> valueTwo;
    cout << valueOne << " / " << valueTwo << " = " << setprecision(2)<< valueOne / valueTwo << "\n";
}

//factorial takes a integer and muliplies it and all integers below it and returns the answer
int Calculator::factorial(int num1)
{
    int answer = 1;
    for (int i = 2; i<= num1; i++)
    {
        answer = answer*i;
    }
    return answer;
}

//ask user for a integer that they want to find the factorial for using the factorial function
void Calculator::doFactorial()
{
    int num;
    cout << "Enter a value: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << setprecision(2) << factorial(num) << "\n";
}

//ask user which mode they would like to use or to exit and returns that modes corrisponding value
int Calculator::menu(int start)
{
    int choice;

    if (start == 1)
    {
        cout << "Please choose an option:\n";
        cout << "   1 - add two real numbers\n   2 - subtract two real numbers\n   3 - multiply two real numbers\n";
        cout << "   4 - divide two real numbers\n   5 - get a factorial of a number\n   6 - Menu\n   0 - exit\n? ";
        cin >> choice;
    }
    else
    {
        cout << "? ";
        cin >> choice;
    }

    return choice;
}

/*this introduces the user to the Calulator then evaluates the option integer value the user chose
using the menu function. It takes the value and runs the corrisponding function.*/
void Calculator::run()
{
    int chosen = -1;
    int start = 1;

    cout << "Welcome to Math Calculator!\n";

    while (chosen != 0)
    {

        chosen = menu(start);
        start = -1;

        if (chosen == 1)
        {
            addRnums();
        }
        else if (chosen == 2)
        {
            subRnums();
        }
        else if (chosen == 3)
        {
            multiRnums();
        }
        else if (chosen == 4)
        {
            divRnums();
        }
        else if (chosen == 5)
        {
            doFactorial();
        }
        else if (chosen == 6)
        {
            start = 1;
        }

    }

}


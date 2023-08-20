#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    cout << "Enter your first number: \n";
    cin >> number1;

    if(cin.fail())
    {
        cout << "Input is not a string.";
    }

    cout << "Enter your second number: \n";
    cin >> number2;

    if(cin.fail())
    {
        cout << "Input is not a string.";
    }

    cout << "Enter your third number: \n";
    cin >> number3;

    if(cin.fail())
    {
        cout << "Input is not a string.";
    }

    int *p1 = new(nothrow) int(number1);
    int *p2 = new(nothrow) int(number2);
    int *p3 = new(nothrow) int(number3);

    cout << "Number 1 : " << number1 << endl << "Pointer 1: " << p1 << endl;
    cout << "Number 2 : " << number2 << endl << "Pointer 2: " << p2 << endl;
    cout << "Number 3 : " << number3 << endl << "Pointer 3: " << p3 << endl;

    cout << "Deleting pointers.\n";

    delete p1;
    delete p2;
    delete p3;

    cout << "Memory has been freed up.";

    return 0;
}
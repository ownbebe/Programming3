#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    double hours = 0;
    double wage = 0;
    double OT = 0;
    int workOT = 0;
    double salary = 0;
    double OTSalary = 0;

    cout << "Enter hours worked excluding overtime: \n";
    cin >> hours;

    cout << "Enter wage: \n";
    cin >> wage;

    cout << "Did you work any overtime? \nEnter 1 for yes or 2 for no: \n";
    cin >> workOT;

    if(workOT == 1)
    {
        cout << "How many hours of overtime was worked: ";
        cin >> OT;
    }

    salary = hours * wage;

    if(OT > 0)
    {
        OTSalary = OT * (wage * 1.5);
    }

    salary += OTSalary;
    
    double const *p1 = new(nothrow) double(hours);
    double const *p2 = new(nothrow) double(wage);
    double const *p3 = new(nothrow) double(OT);
    double const *p4 = new(nothrow) double(salary);

    cout << "Hours   Wage   Overtime   Salary\n";
    cout << setw(0) << fixed << setprecision(2) << hours;
    cout << setw(8) << fixed << setprecision(2) << wage;
    cout << setw(6) << fixed << setprecision(2) << OT;
    cout << setw(14) << fixed << setprecision(2) << salary << endl;

    cout << "Pointers:\nHours          Wage           Overtime       Salary\n";
    cout << setw(0) << p1;
    cout << setw(15) << p2;
    cout << setw(15) << p3;
    cout << setw(15) << p4;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
#include "helpfun.h"
#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(short year)
{
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}



int main()
{
    int number = ReadNumber();
    cout << (IsLeapYear(number)?"yes it leep year" :"not it not leap year") << endl; 
    return 0;
}

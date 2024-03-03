#include <iostream>
#include <iomanip>
#include "helpfun.h"

using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getNumberOfDays(int month, int year)
{
    switch (month) {
    case 2:
        return isLeapYear(year) ? 29 : 28;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return 31;
    }
}

int getNumberOfDaysInData(int day, int month, int year)
{
    int outDays = 0;
    for (int i = 1; i < month; i++)
    {
        outDays += getNumberOfDays(i, year);
    }
    return (outDays+day) ;
}

int main()
{
    cout << getNumberOfDaysInData(ReadDay(), ReadMonth(), ReadYear()) << endl;
    return 0;
}


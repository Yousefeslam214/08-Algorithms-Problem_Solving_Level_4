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

sDate getNumberOfDaysInData(int day, int month, int year)
{
    sDate date;
    date.day = day;
    date.month = month;
    date.year = year;
    date.sumOfDays = 0;
    int outDays = 0;
    for (int i = 1; i < month; i++)
    {
        date.sumOfDays += getNumberOfDays(i, year);
    }
    date.sumOfDays += day;
    return date;
}

int main()
{
    sDate date;
    date = getNumberOfDaysInData(ReadDay(), ReadMonth(), ReadYear());
    cout << date.sumOfDays << endl;
    cout << date.day << "/" << date.month << "/" << date.year << endl;
    return 0;
}

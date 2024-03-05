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

sDate daysAdds(int days, sDate date)
{
    int restOfDays = days + getNumberOfDaysInData(date.day, date.month, date.year);
    date.month = 1;
    int monthDays = 0;
    while (true)
    {
        monthDays = getNumberOfDays(date.month, date.year);
        if (restOfDays > monthDays)
        {
            restOfDays -= monthDays;
            date.month++;
            if (date.month > 12)
            {
                date.month = 1;
                date.year++;
            }
        }
        else
        {
            date.day = restOfDays;
            break;
        }
    }
    return date;
}

int main()
{
    sDate date = readFullDate();
    cout << date.sumOfDays << endl;
    cout << date.day << "/" << date.month << "/" << date.year << endl;
    cout << "enter added days -----" << endl;
    date = daysAdds(ReadDay(), date);
    cout << date.day << "/" << date.month << "/" << date.year << endl;
    
    return 0;
}

#include <iostream>
#include <iomanip>
#include "helpfun.h"
using namespace std;

int compareDate(sDate date1, sDate date2)
{
    if (date1.year != date2.year)
    {
        if (date1.year > date2.year)
            return (1);
        else
            return (2);
    }
    else if (date1.month != date2.month)
    {
        if (date1.month > date2.month)
            return (1);
        else
            return (2);
    }
    else if (date1.day != date2.day)
    {
        if (date1.day > date2.day)
            return (1);
        else
            return (2);
    }
    return (0);
}
int main()
{
    sDate date1 = readFullDate();
    sDate date2 = readFullDate();
    int out = compareDate(date1, date2);
    if (out == 1)
        cout << "date one is bigger" << endl;
    else if (out == 2)
        cout << "date two is bigger" << endl;
    else
        cout << "two dates is equal" << endl;
    return 0;
}

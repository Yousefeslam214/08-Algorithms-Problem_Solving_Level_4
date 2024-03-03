#include "helpfun.h"
#include <iostream>
#include <string.h>
using namespace std;

int ReadNumber()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    return num;
}

int ReadYear()
{
    cout << "enter year ? " << endl;
    int x = ReadNumber();
    return x;
}

int ReadMonth()
{
    cout << "enter Month ? " << endl;
    int x = ReadNumber();
    return x;
}

int ReadDay()
{
    cout << "enter day ? " << endl;
    int x = ReadNumber();
    return x;
}
int getStartingDay(int month, int year)
{
    // Zeller's Congruence algorithm to find the day of the week
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (1 + 26 * (month + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    return (h + 5) % 7; // 0 for Saturday, 1 for Sunday, ..., 6 for Friday
}
short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;
    // Gregorian://0:sun, 1:Mon, 2:Tue...etc
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    }


string MonthShortName(int MonthNumber) {
    string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return (Months[MonthNumber - 1]);
    } 

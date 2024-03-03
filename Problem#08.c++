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



void printCalendar(int month, int year) {
    // Print the header
    cout << setw(8) << left << "Sunday"
        << setw(8) << " Monday"
        << setw(8) << " Tuesday"
        << setw(8) << "  Wednesday"
        << setw(8) << "  Thursday"
        << setw(8) << "  Friday "
        << setw(8) << "   Saturday" << std::endl;

    // Print the calendar
    int startingDay = DayOfWeekOrder(1,month, year);
    int numberOfDays = getNumberOfDays(month, year);
    int day = 1;

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (i == 0 && j < startingDay) {
                cout << setw(10) << " ";
            }
            else if (day <= numberOfDays) {
                cout << setw(10) << day;
                ++day;
            }
        }
        cout << std::endl;
    }
}

int main() {

    printCalendar(ReadMonth(), ReadYear());

    return 0;
}

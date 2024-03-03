#ifndef HELPFUN_H
#define HELPFUN_H
#include <string.h>
#include <iostream>
using namespace std;

int ReadNumber();
int ReadYear();
int ReadMonth();
int ReadDay();
int getStartingDay(int month, int year);
short DayOfWeekOrder(short Day, short Month, short Year);
string MonthShortName(int MonthNumber);



#endif

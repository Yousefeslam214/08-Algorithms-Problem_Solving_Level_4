#include "helpfun.h"
#include <iostream>
#include <string>
using namespace std;

short DayOfWeekOrder(short day, short month, short year)
{
    short a, y, m;
    a = (14 - month) / 12;
    y = year - a;
    m = month + (12 * a) - 2;
    return (day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}
string DayName(short d)
{
    string arrDayName[] =  {"Sun","Mon","Tue","Wed","Thu","Fri" ,"Sat"};
    return arrDayName[d];
}
int main()
{
    cout << "year\n";
	short Year = ReadNumber();
    cout << "month\n";
	short Month = ReadNumber();
    cout << "day\n";
	short day = ReadNumber();

    cout << day << " / " << Month <<" / " << Year << endl;
    cout << DayName(DayOfWeekOrder(day, Month, Year))<< endl;
    
	//system("pause>0");
	return 0;
}

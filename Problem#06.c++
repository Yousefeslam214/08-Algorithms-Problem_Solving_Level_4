#include <iostream>
using namespace std;

short ReadYear()
{
	short Year;
	cout << "Enter Year For Check: ";
	cin >> Year;

	return Year;
}

short ReadMonth()
{
	short Month;
	cout << "\nEnter Month For Check: ";
	cin >> Month;

	return Month;
}

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;

	short arr31Days[7] = { 1,3,5,7,8,10,12 };

	for (short i : arr31Days)
		return (Month == 2 ? IsLeapYear(Year) ? 29 : 28 : (arr31Days[i] == Month) ? 31 : 30);
}

int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "\nDays in Month [" << Month << "] : " << NumberOfDaysInAMonth(Month, Year);

	system("pause>0");
	return 0;
}

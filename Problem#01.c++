#include "helpfun.h"
#include <iostream>
#include <string>
using namespace std;

string NumToText(int num)
{
    if (num == 0)
        return "";
    if (num >= 1 && num <= 19)
    {
        string arr[] = { "","One","Two","Three","Four","Five","Six","Seven", "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen", "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
        return arr[num] + " ";
    }
    
    if (num >= 20 && num <= 99)
    {
        string arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
        return arr[num / 10] + " " + NumToText(num % 10);
    }

    return " ";
}




int main()
{
    int number = ReadNumber();
    cout << NumToText(number) << endl;
    return 0;
}

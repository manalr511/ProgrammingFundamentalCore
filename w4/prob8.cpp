#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter number:";
    cin >> number;
    int tens;
    tens = number / 10;
    int ones;
    ones = number % 10;
    if (number == 10)
    {
        cout << "ten";
        return 0;
    }
    if (number == 11)
    {
        cout << "eleven";
        return 0;
    }
    if (number == 12)
    {
        cout << "twelve";
        return 0;
    }
    if (number == 13)
    {
        cout << "thirteen";
        return 0;
    }
    if (number == 14)
    {
        cout << "fourteen";
        return 0;
    }
    if (number == 15)
    {
        cout << "fifteen";
        return 0;
    }
    if (number == 16)
    {
        cout << "sixteen";
        return 0;
    }
    if (number == 17)
    {
        cout << "seventeen";
        return 0;
    }
    if (number == 18)
    {
        cout << "eighteen";
        return 0;
    }
    if (number == 19)
    {
        cout << "nineteen";
        return 0;
    }
    if (tens == 2)
    {
        cout << "twenty";
    }
    if (tens == 3)
    {
        cout << "thirty";
    }
    if (tens == 4)
    {
        cout << "fourty";
    }
    if (tens == 5)
    {
        cout << "fifty";
    }
    if (tens == 6)
    {
        cout << "sixty";
    }
    if (tens == 7)
    {
        cout << "seventy";
    }
    if (tens == 8)
    {
        cout << "eighty";
    }
    if (tens == 9)
    {
        cout << "ninety";
    }
    if (ones == 1)
    {
        cout << "  one";
    }
    if (ones == 2)
    {
        cout << "  two";
    }
    if (ones == 3)
    {
        cout << "  three";
    }
    if (ones == 4)
    {
        cout << "  four";
    }
    if (ones == 5)
    {
        cout << "  five";
    }
    if (ones == 6)
    {
        cout << "  six";
    }
    if (ones == 7)
    {
        cout << "  seven";
    }
    if (ones == 8)
    {
        cout << "  eight";
    }
    if (ones == 9)
    {
        cout << "  nine";
    }
    if (number == 100)
    {
        cout << "hundered";
    }
    if (number == 0)
    {
        cout << "zero";
    }
}

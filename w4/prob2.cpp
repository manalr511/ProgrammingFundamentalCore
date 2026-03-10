#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout << "enter speed in km/h:";
    cin >> speed;
    if (speed > 100)
    {
        cout << "halt.....YOU WILL BE CHALLANED!!!";
    }
    else
    {
        cout << "perfect!you are going good.";
    }
}
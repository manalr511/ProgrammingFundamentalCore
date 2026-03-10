#include <iostream>
using namespace std;
int main()
{
    float speed;
    cout << "enter speed:";
    cin >> speed;
    if (speed <= 10)
    {
        cout << "slow";
    }
    else if (speed <= 50)
    {
        cout << "average";
    }
    else if (speed <= 150)
    {
        cout << "fast";
    }
    else if (speed <= 1000)
    {
        cout << "ultra fast";
    }
    else
    {
        cout << "Extremely fast";
    }
}
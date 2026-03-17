#include <iostream>
using namespace std;
int main()
{
    int value;
    cout << "enter a positive number:";
    cin >> value;
    while (value <= 0)
    {
        cout << "error" << value << "it is not a positive number" << endl;
        cout << "please enter a positive number:";
        cin >> value;
    }

    cout << "program ends" << endl;

    return 0;
}
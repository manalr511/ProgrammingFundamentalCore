#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    int count;
    count = 0;
    for (int i = n; i > 0; i= i / 10)
    {
        count = count + 1;
    }
    cout << "The total number of digits are:" << count;
    return 0;
}
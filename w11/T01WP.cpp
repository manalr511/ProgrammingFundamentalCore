#include <iostream>
using namespace std;
void printcars(int car[][5], int row);
int main()
{
    int row = 5;
    int col = 5;
    int car[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1},
    };
    printcars(car, row);
}
void printcars(int car[][5], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << car[i][j] << " ";
        }
        cout << endl;
    }
}
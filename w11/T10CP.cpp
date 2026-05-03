#include <iostream>
using namespace std;

char world[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};

bool gravity = false;

void displayworld();
void SetGravityStatus(bool status);
void timetick(int times);

int main()
{
    cout << "Original World:";
    displayworld();

    SetGravityStatus(true);

    timetick(1);

    cout << "After 1 Tick:";
    displayworld();

    return 0;
}

void displayworld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << world[i][j] << " ";
        }
        cout << endl;
    }
}

void SetGravityStatus(bool status)
{
    gravity = status;
}

void TimeTick(int times)
{
    for (int t = 0; t < times; t++)
    {
        if (gravity == true)
        {
            for (int i = 3; i >= 0; i--)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (world[i][j] == '#' && world[i + 1][j] == '-')
                    {
                        world[i + 1][j] = '#';
                        world[i][j] = '-';
                    }
                }
            }
        }
    }
}
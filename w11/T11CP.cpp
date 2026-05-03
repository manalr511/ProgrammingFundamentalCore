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
bool isBlackHole = false;

void DisplayWorld();
void SetGravityStatus(bool status);
void SetBlackHoleStatus(bool status);
void TimeTick(int times);

int main()
{
    cout << "Original World:";
    DisplayWorld();

    SetGravityStatus(true);
    SetBlackHoleStatus(true);

    TimeTick(1);

    cout << "After 1 Tick with Black Hole:";
    DisplayWorld();

    return 0;
}

void DisplayWorld()
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

void SetBlackHoleStatus(bool status)
{
    isBlackHole = status;
}

void TimeTick(int times)
{
    for (int t = 0; t < times; t++)
    {
        if (gravity == true)
        {
            for (int i = 4; i >= 0; i--)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (i == 4)
                    {
                        if (isBlackHole == true && world[i][j] == '#' && world[0][j] == '-')
                        {
                            world[0][j] = '#';
                            world[i][j] = '-';
                        }
                    }
                    else
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
}
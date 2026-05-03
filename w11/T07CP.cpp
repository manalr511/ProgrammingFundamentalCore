#include <iostream>
using namespace std;

bool isgoal(char field[][16]);
int main()
{
    char field[7][16] = {
        {' ',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ','|',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ','|','_','_','_','|',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    };

    if (isgoal(field))
    {
        cout << "GOAL!" << endl;
    }
    else
    {
        cout << "Missed!" << endl;
    }

    return 0;
}

bool isgoal(char field[][16])
{
    int ballRow, ballCol;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (field[i][j] == '0')
            {
                ballRow = i;
                ballCol = j;
            }
        }
    }
    if (ballRow < 4 && ballCol > 5 && ballCol < 9)
    {
        return true;
    }

    return false;
}
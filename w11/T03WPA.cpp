#include <iostream>
using namespace std;
void printtoyotablue(string car[][6], int row);
int main()
{
    int row = 5;
    int col = 6;
    string car[5][6] = {
        {"suzuki", "10", "7", "12", "10", "4"},
        {"toyota", "18", "11", "15", "17", "2"},
        {"nissan", "23", "19", "12", "16", "14"},
        {"bmw", "7", "12", "16", "0", "2"},
        {"audi", "3", "5", "6", "2", "1"},
    };
    printtoyotablue(car,row);
}
void printtoyotablue(string car[][6], int row)
{
    for (int i = 0; i < row; i++)
    {
        if (car[i][0] == "toyota")
        {
            cout << "toyota found" << endl;
            for (int j = 0; j < 6; j++)
            {
                if (j == 4)
                {

                        cout<<car[i][j];
                }
            }
        }
    }
}
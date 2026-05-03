#include <iostream>
using namespace std;

string fire(char board[][5], string coordinate);

int main()
{
    char board[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}
    };

    string coordinate;

    cout << "Enter coordinate: ";
    cin >> coordinate;

    cout << fire(board, coordinate) << endl;

    return 0;
}

string fire(char board[][5], string coordinate)
{
    int row = coordinate[0] - '0';
    int col = coordinate[1] - '0';

    if (board[row][col] == '*')
    {
        return "BOOM";
    }
    else
    {
        return "splash";
    }
}
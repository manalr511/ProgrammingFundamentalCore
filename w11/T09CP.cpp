#include <iostream>
using namespace std;
int countrow(int arr[][3],int row);
int main()
{

    int row;
    cout << "enter row size: ";
    cin >> row;
    cout << "enter elements of matrix: ";
    int arr[row][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    int count=countrow(arr,row);
    cout<<"total identical rows are:"<<count<<endl;
    return 0;
}
int countrow(int arr[][3], int row)
{
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        bool found = false;

        for (int j = 0; j < row; j++)
        {
            if (i != j &&
                arr[i][0] == arr[j][0] &&
                arr[i][1] == arr[j][1] &&
                arr[i][2] == arr[j][2])
            {
                found = true;
            }
        }

        if (found == true)
        {
            count++;
        }
    }

    return count;
}
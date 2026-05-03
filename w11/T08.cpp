#include <iostream>
using namespace std;
  void printmatrix(int arr[][5],int row);
void largest(int arr[][5], int row);
int main()
{

    int row;
    cout << "enter row size: ";
    cin >> row;
    cout << "enter elements of matrix: ";
    int arr[row][5];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
      
        cout << "original matrix is: "<< endl;
         printmatrix(arr,row);
         cout<<"matrix after swapping is: "<<endl;
    largest(arr,row);
    return 0;
}
void largest(int arr[][5], int row)
{
    int maxcol= 0;
    int maxsum=0;
    for (int i=0; i<row;i++){
        maxsum=maxsum+arr[i][0];
    }
        for(int j=0;j<5;j++)
        {
            int sum=0;
        for(int i=0;i<row;i++){
            sum=sum+arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            maxcol=j;
        }
            
        }
        //swap
        for(int i=0;i<row;i++){
            int temp=arr[i][0];
            arr[i][0]=arr[i][maxcol];
            arr[i][maxcol]=temp;
        }
    }
    void printmatrix(int arr[][5],int row){
        for(int i=0;i<row;i++){
            for(int j=0;j<5;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

#include <iostream>
using namespace std;
void sum(int arr[][3],int row);
int main(){
    int row;
    cout<<"enter row size: ";
    cin>>row;
    cout<<"enter elements of matrix: ";
    int arr[row][3];
    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){
            cout<<"enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    sum(arr,row);
}
void sum(int arr[][3],int row){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<"sum of matrix element is: "<<sum;

}
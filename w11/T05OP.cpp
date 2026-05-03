#include <iostream>
using namespace std;
void matrix(int arr[][3],int row);
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
    bool identity=false;
    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){
 if(i==j && arr[i][j]!=1 ){
    identity=true;
 }
 if(i!=j && arr[i][j]!=0){
    identity=true;
 }
        }
    }
    if(identity==false){
        cout<<"identity matrix";
    }else{
        cout<<"not identity matrix";
    }
    matrix(arr,row);
}
void matrix(int arr[][3],int row){
for(int i=0;i<row;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
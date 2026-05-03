#include <iostream>
using namespace std;
void converter(int car[][5], int row, string colour);
int main()
{
    int row = 5;
    int col = 5;
    string colour;
    cout<<"enter a colour: ";
    cin>>colour;
    int car[5][5] ={
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1},
    };
    converter(car, row, colour);
    };

void converter (int car[][5], int row, string colour){
 int sum=0;
 int col;
 if(colour=="red"){
    col=0;
 }else
 if(colour=="black"){
    col=1;
 }else
  if(colour=="brown"){
    col=2;
 }else
  if(colour=="blue"){
    col=3;
 }else
  if(colour=="gray"){
    col=4;
 }else {
    cout<<"car of such colour does not exist";
 }
   for (int i=0;i<row;i++){
    sum=sum+car[i][col];
   }
   cout<<sum;
}
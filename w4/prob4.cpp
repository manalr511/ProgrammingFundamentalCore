#include <iostream>
using namespace std;
int main(){
int red;
cout<<"enter the number of red roses:";
cin>>red;
float priceR;
priceR=2.00;
float totalR;
totalR=red*priceR;
int white;
cout<<"enter the number of white roses:";
cin>>white;
float priceW;
priceW=4.10;
float totalW;
totalW=white*priceW;
int tulips;
cout<<"enter the number of tulips:";
cin>>tulips;
float priceT;
priceT=2.50;
float totalT;
totalT=tulips*priceT;
float FTotal;
FTotal=totalR+totalW+totalT;
float discount;
if (FTotal>200){
discount=0.20*FTotal;
}
float afterdiscount;
afterdiscount=FTotal-discount;
cout<<"orignal price= " <<FTotal<<endl;
cout<<"orignal price after discount= " <<afterdiscount;
}
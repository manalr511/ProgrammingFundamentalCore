#include<iostream>
using namespace std;
int main(){
int flightN[4]={1334,90,295,24};
string dest[4]={"lahore","karachi","moscow","newyork"};
int seatN[4]={2,4,5,3};
int num;
cout<<"enter the number of flights(max 4):"<<endl;
cin>>num;
for (int i=0;i<num;i++){
    cout<<"enter the flight number for flight "<<i+1<<" :";
    cin>>flightN[i];
    cout<<"enter the Destination for flight "<<flightN[i]<<" : ";
    cin>>dest[i];
    cout<<"enter seats available for flight "<<flightN[i]<<" : ";
    cin>>seatN[i];
}
cout<<"-----Flight Information-----"<<endl;
cout<<"----------------------------"<<endl;
for (int i=0;i<num;i++){
    cout<<"flight "<<flightN[i]<<" to "<< dest[i]<<" has " << seatN[i]<<" seats available"<<endl;
}
cout<<endl;
cout<<"   flight with less than five seats     "<<endl;
cout<<"----------------------------------------"<<endl;
bool found=false;

for (int i=0;i<num;i++){
    if (seatN[i]<5){
cout <<"flight "<< flightN[i] <<" to "<< dest[i]<<" has only "<<seatN[i]<<" available"<<endl;
      found=true; 
}
}
if (found==false){
    cout <<"No flight with less than 5 seat available"<<endl;
}

}
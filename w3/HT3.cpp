#include <iostream>
using namespace std;
int main(){ 

int initialV;
cout<<" enter initial velocity :";
cin>>initialV;
int acceleration;
cout<<" enter acceleration :";
cin>>acceleration;
int time;
cout<<"enter time in seconds :";
cin>>time;
int finalV;
finalV= (acceleration*time)+initialV;
cout<<"final velocity (m/s)="<<finalV;

}

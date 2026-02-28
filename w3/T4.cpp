#include <iostream>
using namespace std;
int main(){
float charge;
cout <<" Enter charge in coulombs :";
cin>>charge;
float time;
cout <<"Enter time in seconds :";
cin>>time;
float current;
current = charge/time;
cout <<"current is " << current <<" amperes ";

}
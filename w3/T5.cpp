#include <iostream>
using namespace std;
int main(){

string Name;
cout <<" enter your name :";
cin>>Name;
int Matric;
cout <<" enter matriculation marks (out of 1100) :";
cin>>Matric;
int Inter;
cout <<" enter intermediate marks (out of 550) :";
cin>>Inter;
int Ecat;
cout <<" enter ecat marks (out of 400):";
cin>>Ecat;
float Aggregate;
Aggregate = (((Matric/1100.0) * 0.10) + ((Inter/550.0) * 0.40) + ((Ecat/400.0) * 0.50))  * 100 ;
cout <<"your aggregate score is"<<Aggregate; 

}
#include <iostream>
using namespace std;
int main(){
string movie ;
cout<<"enter the name of the movie :";
cin>>movie ;
int adult ;
cout<<"enter the price of adult ticket :";
cin>>adult ;
int child ;
cout<<"enter the price of child ticket :";
cin>>child ;
int adultS ;
cout<<"enter the number of adult tickets solds :" ;
cin>>adultS ;
int childS ;
cout<<"enter the number of children's tickets sold :";
cin>>childS ;
float charity ;
cout<<"enter the percentage of the total money to donate to charity :";
cin>>charity ;
int total ;
total = (adult*adultS)+(child*childS) ;
float donate ;
donate= (charity/100) * total ;
int remaining;
remaining= total-donate ;
cout<< " total amount generated from ticket's sale = " << total  << "\n"  " donation to charity = " << donate << "\n" " remaining amount after donation"<<remaining;





}
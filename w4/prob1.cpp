#include <iostream>
using namespace std;
int main(){
string country;
country='ireland';
cout<<"enter the name of country:";
cin>>country;
int orgprice;
cout<<"enter the ticket price in dollars:";
cin>>orgprice;
float discount;
if(country=="ireland"){
    discount=0.10*orgprice;
}
if(country!="ireland"){
    discount=0.05*orgprice;
}
int finalprice;
finalprice=orgprice-discount;
cout<<"discounted price is " <<finalprice;
}
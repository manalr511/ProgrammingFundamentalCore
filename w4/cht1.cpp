#include <iostream>
using namespace std;
int main (){
int bill;
cout<<"enter your total bill:";
cin>>bill;
int discount,total;
if (bill<=5000){
    discount=0.05*bill;
}    
if (bill>5000){
    discount=0.10*bill;
}
total=bill-discount;
cout<<"your bill after discount is : "<<total;
}
#include <iostream>
using namespace std;
int main (){
int salary;
cout<<"enter the salary per month:";
cin>>salary;
int laptop;
laptop=50000;
int adv,months;
adv=0.5*salary*6;
months=laptop/salary;
if (adv>=laptop){
    cout<<"yes you can buy the laptop";
}    
else {
    cout<<"months required to buy laptop="<<months;
}
}
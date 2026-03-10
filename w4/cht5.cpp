#include <iostream>
using namespace std;
int main(){
string b1;
cout<<"enter the name of first brother:";
cin>>b1;
int age1;
cout<<"enter the age of first brother:";
cin>>age1;
string b2;
cout<<"enter the name of second brother:";
cin>>b2;
int age2;
cout<<"enter the age of second brother:";
cin>>age2;
string b3;
cout<<"enter the name of third brother:";
cin>>b3;
int age3;
cout<<"enter the age of third brother:";
cin>>age3;
string young;
young=b1;
int small;
small=age1;
if (age2<small){
    young=b2;
    small=age2;
}
if (age3<small){
    young=b3;
    small=age3;
}
cout<<young << " is youngest";
}
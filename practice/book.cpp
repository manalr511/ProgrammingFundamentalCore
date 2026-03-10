#include <iostream>
using namespace std;
int main (){
    string country;
    cout<<"enter the name of the country:";
    cin>>country;
    int orgprice;
    cout<<"enter the ticket price:";
    cin>>orgprice;
    int age;
    cout<<"enter the age of the person:";
    cin>>age;
    int Bt;
    cout<<"enter the booking time:";
    cin>>Bt;
    float discount,TP,extradis,FTP,FFTP;
    extradis=0;
    if (country=="ireland"){
        discount=0.1*orgprice;
    } else{
        discount=0.05*orgprice;
    }
    TP=orgprice-discount;
    if(age >60 || age <24){
        extradis=0.05*TP;
    }
    FTP=TP-extradis;
    if (Bt>30){
FFTP=FTP-50;
} else {
    FFTP=FTP;
}
if (FFTP<100){
    FFTP=100;
}
cout<<"the final ticket price is:"<<FFTP;}

#include <iostream>
using namespace std;
int main(){
    int n1,n2,lcm,ln1,ln2;
    cout<<"enter first number:";
    cin>>n1;
    cout<<"enter second number:";
    cin>>n2;
    ln1=n1;
    ln2=n2;
    while(n1%n2!=0)
    {
        int r=n1%n2;
        n1=n2;
        n2=r;
    }
    cout<<"GCD:"<<n2<<endl;
lcm=(ln1*ln2)/n2;
 cout<<"LCM:"<<lcm;
}
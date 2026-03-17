#include <iostream>
using namespace std;
int main(){
    int sum,num;
    sum=0;
    cout<<"enter number:";
    cin>>num;
    for (int num=num;num>0;num=num/10){
        num=num%10;
     sum=sum+num;
    }
     cout<<sum<<endl;
}
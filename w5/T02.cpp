#include <iostream>
using namespace std;
int main(){
    int num;
    num=0;
    int sum;
    sum=0;
    while(num>=0){
        sum=sum+num;
        cout<<"enter a number:";
        cin>>num;
    }
    cout<<"sum:"<<sum;
}
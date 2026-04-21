#include<iostream>
#include<cmath>
using namespace std;
void add(int num);

int main(){
    int num;
    cout<<"Enter a five digit number: ";
    cin>>num;
    add(num);
    return 0;
   
}
void add(int num){
    int sum=0;
    int remain=num;
    while(remain>0){
        sum+=remain%10;
        remain=remain/10;

    }if (sum%2==0){
        cout<<"It is even";
    }else {
        cout<<"it is odd";
    }   

}

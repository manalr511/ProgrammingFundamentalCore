#include<iostream>
#include<cmath>
using namespace std;
bool sym(int num);
int main(){
    int num;
    cout<<"Enter a 3 digit number: ";
    cin>>num;
    if (sym(num)){
    cout<<"The number is symmetrical";
    }else {
        cout<<"The number is not symmetrical";
    }

}
bool sym(int num){
    int fd;
    fd=num/100;
    int ld;
    ld=num%10;
    if (ld==fd){
        return true;
    }else {
        return false;
    }
}
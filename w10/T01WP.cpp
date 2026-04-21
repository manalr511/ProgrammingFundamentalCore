#include<iostream>
using namespace std;
//declaring
float sum(float num1,float num2);
//calling the function
int main (){
    float num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"sum is: "<<num1+num2;
    return 0;

}
//defining
float sum(float num1,float num2){
    return num1+num2;
}
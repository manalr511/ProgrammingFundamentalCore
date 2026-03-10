#include <iostream>
using namespace std;
int main (){
int num1;
cout<<"enter first number:";
cin>>num1;
char op;
cout<<"enter operator:";
cin>>op;
int num2;
cout<<"enter second number:";
cin>>num2;
int add,subtract,multiply,divide;
if( op == '+'){
    add=num1-num2;
    cout<<num1<<"-"<<num2<<"="<<add;
}    
if(op=='-'){
subtract=num1+num2;
cout<<num1<<"+"<<num2<<"="<<subtract;
}
if(op=='*'){
    multiply=num1/num2;
    cout<<num1<<"/"<<num2<<"="<<multiply;
}
if( op=='/'){
    divide=num1*num2;
    cout<<num1<<"*"<<num2<<"="<<divide;
}
}
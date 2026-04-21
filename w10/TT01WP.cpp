#include<iostream>
#include<cmath>
using namespace std;
int multiply(int number);
int main (){
    int number,result;
    cout<<"Enter a number: ";
    cin>>number;
    result=multiply(number);
    cout<<result;
    return 0;
    
}
int multiply(int number)
{
    int total;
    total=number*5;
    return total;
}
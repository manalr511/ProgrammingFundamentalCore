#include<iostream>
#include<cmath>
using namespace std;
char alphabet(char alpha);
int main(){
    char alpha;
    cout<<"Enter a character(A/a): ";
    cin>>alpha;
    cout<<alphabet(alpha);
    return 0;
}
char alphabet(char alpha){
if(alpha=='a'){
    cout<<"you have entered small a";

}else {
    cout<<"you have entered capital A";
}
}
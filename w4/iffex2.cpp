#include <iostream>
using namespace std;
int main (){
char going;
cout<<"are you friends going? (press y for yes)";
cin>>going;
if ( going == 'y' ){
cout<<"you are also going";
}
if (going == 'n'){
    cout<<"you are not going";
}
}
#include <iostream>
using namespace std;
int main(){
int T1;
cout<<"enter the temperature of city 1:";
cin>>T1;
int T2;
cout<<"enter the temperature of city 2:";
cin>>T2;
int temperature;
 temperature=T1-T2;
if (temperature>10){
   cout<<"Difference is too big";
}
}
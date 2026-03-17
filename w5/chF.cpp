#include <iostream>
using namespace std;
int main(){
int num,digit,lastdigit,count;
cout<<"enter number:";
cin>>num;
cout<<"enter digit:";
cin>>digit;
count=0;
lastdigit=1;
for (num=num;num >0;num=num/10)
{
   lastdigit=num%10;
if(lastdigit==digit)
{ count=count+1;}
}

cout<<"the frequency check of the number is :"<<count<<endl;
}
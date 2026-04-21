#include<iostream>
#include<cmath>
using namespace std;
void timetravel(int min,int hr);
int main(){
 int min,hr;
 cout<<"Enter hours: ";
 cin>>hr;
 cout<<"Enter minutes: ";
 cin>>min;   
 timetravel(min,hr);
 return 0;
}
void timetravel(int min,int hr){
int tm=(hr*60)+min+15;
int ttm=tm/60;
int tttm=tm-ttm;
if (ttm>=24){
  cout<<"0"<<" : "<<tttm;
}
else {
    cout<<ttm<<" : "<<tttm;
}
}
#include <iostream>
using namespace std;
int main(){
int holidays;
cout<<"enter the holidays:";
cin>>holidays;
int Wdays;
Wdays=365-holidays;
int timeforgames;
timeforgames=(Wdays*63)+(holidays*127);
int norms;
norms=30000;
int difference,hours,minutes;
difference=norms-timeforgames;
if(timeforgames<=norms){
  difference=norms-timeforgames;
  hours=difference/60;
  minutes=difference%60;
cout<<"tom sleeps well"<<endl;
cout<<hours<< " hours and " <<minutes<< " minutes less for play";
}
else{
    cout<<"Tom will run away"<<endl;
    cout<<hours<<" hours and " <<minutes<< " minutes less for play";
}
}
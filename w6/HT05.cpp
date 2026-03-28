#include <iostream>
using namespace std;
main(){
    int count=0;
    int num;
    cout<<"enter the number of customers:";
    cin>>num;
    string name[num];
    cout<<"enter the name of "<< num <<" customers:"<<endl;
    for ( int i=0;i<num;i++){
           cin>>name[i];
    }
    char letter,Fl;
    cout<<"enter a letter to check:"<<endl;
    cin>>letter;
    for (int i=0;i<num;i++){
        Fl=name[i][0];
        if (Fl==letter){
            count++;
        }
      }
      cout<<"total names starting with "<<letter<<" is :"<<count;
}
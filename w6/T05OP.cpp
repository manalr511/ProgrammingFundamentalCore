#include <iostream>
using namespace std;
main(){
    int num;
    cout<<"how many numbers do you want:";
    cin>>num;
    int n[num];
    for (int i=0;i<num;i++){
    cout<<"enter number"<<i+1<<":";
    cin>>n[i];
    }
    cout<<"numbers are :";
    for (int i=0;i<num;i++){
        cout<<n[i];
    }
}
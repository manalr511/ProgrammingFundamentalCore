#include <iostream>
using namespace std;
main(){
  
int count=0;
 int n;
 cout<<"enter number of elements:";
 cin>>n;
    int even;
 even=0;
 int num[n];
 cout<<" enter " << n << " numbers:";
 for (int i=0;i<n;i++){
    cin>>num[i];
    if (num[i]%2==0){
        even++;
    }
 }
 cout<<" total even numbers:"<<even;



}
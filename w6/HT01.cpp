#include <iostream>
using namespace std;
main(){
int sum=0;
int num;
cout<<"enter number of elements:";
cin>>num;
int n[num];
cout<<"enter " << num << " numbers:";
for ( int i=0;i<num;i++){
    cin>>n[i];
    sum=sum+n[i];
}
cout<<"sum of all elements: " <<sum;
}
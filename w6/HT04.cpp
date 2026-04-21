#include <iostream>
using namespace std;
main(){
int n=5;
cout<<"enter the name of 5 students:";
string name[n];
for (int i=0;i<n;i++){
    cin>>name[i];
}

cout<<"student names are : "<<name[5]<<endl;
for (int i=0;i<n;i++){
    cout<<name[i]<<endl;
}
}
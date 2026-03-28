#include <iostream>
using namespace std;
main(){
int arr;
cout<<"enter the size of array:";
cin>>arr;
bool found=false;
int Ar[arr];
cout<<"enter " << arr <<" elements of array:";
for (int i=0;i<arr;i++){
    cin>>Ar[i];
}

for (int i=0;i<arr;i++){
    if (Ar[i]==0){
        found=true;
        break;
    }
}
if(found){
    cout<<"the array is special";
}
else {
    cout<<"the array is not special";
}
}
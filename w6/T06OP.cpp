#include <iostream>
using namespace std;
main(){
    int num;
    cout<<"enter the number of elements:";
    cin>>num;
    int n[num];
     cout<<"enter "<< num<<" numbers,one per line:"<<endl;
       for(int i=0;i<num;i++){
               cin>>n[i];
}
 int max=n[0];
        for(int i=1;i<=num;i++){
        if(n[i]>max){
            max=n[i];
        }
    }
           
    cout<<"The largest number entered is " << max;
    return 0;
       }
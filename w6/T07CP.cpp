#include <iostream>
using namespace std;
main(){
    int R;
    cout<<"Enter the number of resistors in the series circuit:";
    cin>>R;
    float res[R];
    float sum=0;
    cout<<"enter the resistance values(in ohms)of the " << R<<" resistors, one per line:"<<endl;
    for (int i=0;i<R;i++){
        cin>>res[i];
        sum=sum+res[i];
    }
    cout<<"The total resistance of the series circuit is " << sum;
}
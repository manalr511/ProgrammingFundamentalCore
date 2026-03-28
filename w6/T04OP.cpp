#include <iostream>
using namespace std;
main(){
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    if (n<=0){
        cout << " Invalid input.Number of elemts must be greater than 0."<<endl;
        return 0;
    }
    int arr[n];
    cout << "enter" << n << " numbers, oner per line:"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"number in reverse order is:";
    for (int i=n-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
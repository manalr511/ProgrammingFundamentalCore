#include <iostream>
using namespace std;
int main(){
    int num,multiple;
    cout<<"enter number:";
    cin>>num;
    for (int i=1;i<=10;i++){
    multiple=num*i;
    cout << num << "*" << i << "=" << multiple <<endl;
       
        }
}
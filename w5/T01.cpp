#include <iostream>
using namespace std;
int main(){
    char choice='y';
    while(choice!='N' && choice!='n'){
        cout<<"I am Happy!"<<endl;
        cout<<"enter your choice:";
        cin>>choice;
    }
}
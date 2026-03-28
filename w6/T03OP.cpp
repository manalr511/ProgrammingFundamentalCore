#include <iostream>
using namespace std;
main(){
    int i;
    char word[100];
    cout<<"enter the string:";
    cin>>word;
    for (int i=0;word[i]!='\0';i++){
        if(word[i]=='z'){
            word[i]='a';
        }
        else{
            word[i]=word[i]+1;
        }
        
    }
    cout<<"New string is:"<<word;
}
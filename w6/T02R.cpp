#include <iostream>
using namespace std;
main(){
    int i=0;
    char word[100];
    cout<<"enter a word:";
    cin>>word;
    for (i=0;word[i]!='\0';i++){
    }
    for (int j=i-1;j>=0;j--){
        cout<<word[j];
    }
return 0;
}
#include <iostream>
using namespace std;
main(){
    string word;
     char letter;
     cout<<"enter the word:";
     cin>>word;
     cout<<"enter the letter you want to find:";
     cin>>letter;
        bool Found= false;
        for (int i=0;word[i]!='\0';i++)
        {
            if (word[i]==letter)
        {
                Found=true;
                break;
            }
        }
        if(Found){
            cout<<"is found";
        }
        else{
            cout<<"not found";
        }
}
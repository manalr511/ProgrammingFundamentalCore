#include <iostream>
using namespace std;
main(){
    string word,rep ="";
    cout<<"enter a string:";
    getline(cin,word);
    for (int i=0;word[i]!='\0';i++)
    {
      if(word[i]!='a' &&  word[i]!='A' && word[1]!='e' && word[i]!='E' && word[i]!='i' && word[i]!='I' && word[i]!='o' && word[i]!='O' && word[i]!='u' && word[i]!='U' )      
              {
                rep=rep+word[i];
              }
            }
         cout<<rep;
        }
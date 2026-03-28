#include <iostream>
using namespace std;
main(){
    int n;
    cout<<"enter the number of chords:";
    cin>>n;
    string chord[n];
    cout<<"enter "<< n<< " chords, one per line: "<<endl;
    for (int i=0;i<n;i++){
           cin>>chord[i];
    }
    for (int i=0;i<n;i++){
      int j=0;
      while(chord[i][j]!='\0'){
        j++;
      }
      if (chord[i][j-1]!='7'){
        chord[i]=chord[i]+"7";
      }
    }
    cout<<"jazzidied chords : [";
    for (int i=0;i<n;i++){
      cout<<chord[i]<<" , ";
    }
    cout<<"] ";
      
}
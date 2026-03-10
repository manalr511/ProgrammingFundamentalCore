#include <iostream>
using namespace std;
int main (){

float imposter;
cout<<"enter imposter count :";
cin>>imposter;
float player;
cout<<"enter player count :";
cin>>player;
float chance;
chance = 100*(imposter/player);
cout<< " chance of being an imposter : "<<chance<<"%";
}
#include <iostream>
using namespace std;
int main(){

float vegetables;
cout<<" enter the vegetable price per kg (in coins):";
cin>>vegetables;
float fruits;
cout<<" enter the fruit price per kg (in coins):";
cin>>fruits;
int vegT;
cout<<"enter total kg of vegetables :";
cin>>vegT;
int fruitT;
cout<<"enter total kg of fruits :";
cin>>fruitT;
int totalcoin;
totalcoin= (vegetables*vegT)+(fruits*fruitT);
int totalrupee;
totalrupee = totalcoin/1.94;
cout<<"total earnings in rupees is : "<<totalrupee;

}
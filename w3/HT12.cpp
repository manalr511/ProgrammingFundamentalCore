#include <iostream>
using namespace std;
int main(){

int sqmeters;
cout<<"enter the square meters you can paint :";
cin>>sqmeters;
int height;
cout<<"enter height of wall in meters :";
cin>>height;
int width;
cout<<"enter width of wall in meters :";
cin>> width;
int walls;
walls= sqmeters/(height*width);
cout<<" number of walls you can paint is"<<walls;


}
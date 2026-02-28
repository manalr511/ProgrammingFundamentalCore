#include <iostream>
using namespace std;
int main(){

int weight ;
cout<<"enter the weight of fertilizer bag in pounds :" ; 
cin>>weight ;
int  price;
cout<<"enter price of the bag : ";
cin>>price;
int area;
cout<<"enter the size of area that the bag can cover :" ;
cin>>area;
int totalCost;
totalCost = price / weight;
cout<<" price of the fertilizer for each pound : " << totalCost;
int cost ;
cost = price / area ;
cout<<" price = " << cost;
}

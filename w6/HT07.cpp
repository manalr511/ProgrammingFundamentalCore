#include <iostream>
using namespace std;
main(){
    string productname[4]={"apple","banana","orange","mango"};
    float price[4]={0.5,0.3,0.8,1.2};
    int quant[4]={50,100,30,20};
    int num;
    cout<<"enter the number of products:";
    cin>>num;
    for (int i=0;i<num;i++){
        cout<<"enter the price of "<<i+1<<" product :";
        cin>>productname[i];
        cout<<"enter the price of "<< productname[i]<<" :$";
        cin>>price[i];
        cout<<"enter the quantity of "<< productname[i] << ":";
        cin>>quant[i];
    }
    float total[num];
        cout<<"-----PRODUCT INVENTORY REPORT-----"<<endl;
        cout<<"----------------------------------"<<endl;
     for (int i = 0; i < num; i++)
    {
        total[i] = price[i] * quant[i] ;
        cout << productname[i] << " : $" << price[i] << ", " << quant[i] << " in stock, ";
        cout << " Total value : $" << total[i] << endl;
    }
}
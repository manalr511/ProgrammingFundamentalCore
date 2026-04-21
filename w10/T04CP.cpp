#include<iostream>
#include<cmath>
using namespace std;
int main (){
    float dis,angle;
    cout<<"Enter the distance from the base of tree: ";
    cin>>dis;
    cout<<"Enter the angle of elevation(in degrees): ";
    cin>>angle;
    float rad;
    rad=angle*(M_PI/180.0);
    float height=tan(rad)*dis;
 cout<<"Total height of tree is: "<<height <<" feet "<<endl;
 return 0;
}

#include <iostream>
using namespace std;
int main(){
    int year,money;
    cout<<"enter the year:";
    cin>>year;
    cout<<"enter money:";
    cin>>money;
    int age=18;
    for (int i=1800;i<=year;i++){
        if (i%2==0){
        money=money-12000;
        }
        else {
            money=money-(12000+50*age);
        }
        age++;
    }
    if (money>=0){
        cout<<"YES! he will live a carefree life and will have" << money << " dollars left." <<endl;
    }
    else{
        int moneyN=money*(-1);
        cout<<"He will need" << moneyN << "dollars to survive." <<endl ;
    }
    
}
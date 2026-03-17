#include <iostream>
using namespace std;
int main(){
    int age,WMP,Tprice,toy,money,gift;
    toy=0;
    money=0;
    gift=10;
    cout<<"enter lilly's age:";
    cin>>age;
    cout<<"enter price of washing machine:";
    cin>>WMP;
    cout<<"enter price pf each toy:";\
    cin>>Tprice;
     for (int i=1;i<=age;i++){
       if (i%2==0){
        money=money+gift-1;
        gift=gift+10;
       }
       else {
        toy=toy+1;
       }
    }
    money=money+(toy*Tprice);
    if (money>=WMP){
        cout<<"yes!" << endl << money-WMP << " remaining money";
    }
    else {
        cout<<"NO!"<<endl<<Tprice-money<<"insufficient amount";
    }
}

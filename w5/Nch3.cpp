#include <iostream>
using namespace std;
int main(){
    int currentbalance,add,deduct,choice;
    string pin;
    currentbalance=1000;
    for (int i=1;i<=3;i++){
        cout<<"enter atm pin:";
        cin>>pin;
        if (pin=="1234"){
            cout<<"login successfull."<<endl;
        }
        else {cout <<"Wrong pin<<";}
        if (i==3 && !(pin=="1234")){
            cout<<"Too many attempts"<<"card blocked"<<endl;
            break ;
        }
        for (i=1;i<=5;i++){
            cout<<"-----ATM MENU-----"<<endl;
            cout<<"1. check balance:"<<endl;
            cout<<"2. Deposit Money"<<endl;
            cout<<"3. Withdraw Money"<<endl;
            cout<<"4. exit"<<endl;
            cout<<"enter choice:"<<endl;
            cin>>choice;
            cout<<endl;
        if (choice==1){
            cout<<"The current balance is:";
            cout<<currentbalance;
            cout<<endl;
        }
        else if (choice==2){
            cout<<"enter amount to deposit:";
            cin>>add;
            currentbalance=currentbalance+add;
            cout<<"amount added successfully"<<endl;

        }
        else if (choice==3){
            cout<<"enter balance to deduct:";
            cin>>deduct;
            if (currentbalance>=deduct){
                currentbalance=currentbalance-deduct;
                cout<<"amount deducted successfully"<<endl;
            }
            else{
                cout<<"insufficient balance";
            }
        }
            else if (choice==4)
            {
                cout<<"program ends";
            }
        }
    }

}

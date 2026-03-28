#include <iostream>
using namespace std;
main(){
    int amount,CB=1000;
int Cpin=1234;
int pin[3];
int choice;
for (int i=0;i<3;i++){
    cout<<"enter pin:";
    cin>>pin[i];
    if (pin[i]==Cpin){
        cout<<"login successfull"<<endl;
        break;
    }
    else {
        cout<<"wrong pin,please try again.";
    }
}
for (int i=0;i<5;i++){
    cout<<"-----ATM MENU-----"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit Money"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"current balance is:"<<CB<<endl;
    }
    else if (choice==2){
        cout<<"enter amount to deposit:";
        cin>>amount;
        CB=CB+amount;
        cout<<"updates balance:"<<CB<<endl;
    }
    else if (choice==3){
        cout<<"enter amount to withdraw:";
        cin>>amount;
        if (amount<=CB && amount==0){
            CB=CB-amount;
            cout<<"remaining balance"<<CB<<endl;
        }
        else {
            cout<<"insufficient balance";
        }
    }
    else if (choice==4){
        cout<<"thankyou for using ATM"<<endl;
        break;
    }
    else {
        cout<<"invalid choice";
    }

}

}
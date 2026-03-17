#include <iostream>
using namespace std;
int main(){
    int choice,Add,Subtract,Multiply,Divide,n1,n2;
for (int i=0;i<5;i++){
    cout<<"-----Simple Calculator-----"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter choice from (1-5):"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"enter first number:";
        cin>>n1;
        cout<<"enter second number:";
        cin>>n2;
        Add=n1+n2;
        cout<<"Result:"<<Add<<endl;
    }
    if (choice==2){
        cout<<"enter first number:";
        cin>>n1;
        cout<<"enter second number:";
        cin>>n2;
        Subtract=n1-n2;
        cout<<"Result:"<<Subtract<<endl;
    }
    if (choice==3){
        cout<<"enter first number:";
        cin>>n1;
        cout<<"enter second number:";
        cin>>n2;
        Multiply=n1*n2;
        cout<<"Result:"<<Multiply<<endl;
    }
    if (choice==4){
        cout<<"enter first number:";
        cin>>n1;
        cout<<"enter second number:";
        cin>>n2;
        Divide=n1/n2;
        cout<<"Result:"<<Divide<<endl;
    }
    if (choice==4){
        cout<<"Exiting Calculator.";
    }
}

}
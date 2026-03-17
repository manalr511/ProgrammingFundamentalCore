#include <iostream>
using namespace std;
int main(){
    int choice,food,order,status,bill,staff;
for (int i=0;i<5;i++){
    cout<<"-----Restaurant Management System-----"<<endl;
    cout<<"1. View Food Menu"<<endl;
    cout<<"2. Place Order"<<endl;
    cout<<"3. View Order Status"<<endl;
    cout<<"4. Generate Bill"<<endl;
    cout<<"5. Contact Staff"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter choice from (1-6):"<<endl;
    cin>>choice;
if (choice==1){
    cout<<"You selected: View Foof Menu"<<endl;
}
if (choice==2){
    cout<<"You selected: Place Order"<<endl;
}
if (choice==3){
    cout<<"You selected: View Order Status"<<endl;
}
if (choice==4){
    cout<<"You selected: Generate Bill"<<endl;
}
if (choice==5){
    cout<<"You selected: Contact Staff"<<endl;
}
if (choice==6){
    cout<<"You selected: Exit"<<endl;
}

}
}
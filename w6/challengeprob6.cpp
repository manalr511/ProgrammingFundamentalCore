#include <iostream>
using namespace std;
main(){
    
int ipw;
int pw[1]={1234};
string iusn;
string un[1]={"admin"};
int age,choice;
string name,course;
for (int i=0;i<3;i++){
    cout<<"enter username:"<<endl;
    cin>>iusn[i];
    cout<<"enter password:";
    cin>>pw[i];
    if(un[i]==iusn && pw[i] ==ipw){
        cout<<"login successful"<<endl;
        break;
    }
    else {
        cout<<"wrong login credentials";
    }
}
    for (int i=0;i<5;i++){
        cout<<" -----University Management System-----"<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. View Student"<<endl;
        cout<<"3. View Courses"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        for (int i=0;i<3;i++){
             if ( choice==1){
          cout<<"enter student's name";
          cin>>name[i];
          cout<<"enter student's age";
          cin>>age;
        }
        }
        if (choice==2){
            cout<<"student name"<<name<<endl;
            cout<<"student age"<<age<<endl;
        }
       for (int i=0;i<3;i++){
        if (choice==3){
            cout<<"enter the coursename:";
            cin>>course[i];
            cout<<"course added: "<<course;
        }
       }
       if (choice==4){
        cout<<" program ends";
       }
       else{
        cout<<"invalid choice";
       }
    }


}

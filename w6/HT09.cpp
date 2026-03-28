#include<iostream>
using namespace std;
int main()
{ 
    int choice, n, n1, n2;
    cout<<"enter the no. of times you want to run the code: ";
    cin>>n;
    string name[n];
    for( int i = 1; i <= n; i++ )
    {
        cout<<" -------------Library System----------------- "<<endl;
        cout<<"1.Add book "<<endl;
        cout<<"2.Veiw book "<<endl;
        cout<<"3.Borrow book "<<endl;
        cout<<"4.Veiw borrow book "<<endl;
        cout<<"5.Exit "<<endl;

        cout<<" Enter choice (1-6): ";
        cin>>choice;

        if(choice==1 )
        {
            cout<<" Enter how many books you want to add : ";
            cin>>n1;
            for(int i = 0; i < n1 ; i++ )
            {
              cout<<" Enter book name : ";
              cin>>name[i];
              cout<<" You added a book "<<name[i] <<endl;
            }
        }
        else if(choice==2 ) 
        { 
            for( int i =0; i < n1; i++ )
            { cout<<" You view a book "<<i+1 <<" : "<<name[i] <<endl; }
        }
        else if( choice==3 )
        {
            cout<<" how many books you want to borrow : ";
            cin>>n2;
            for( int i =0; i < n2; i++ )
            {
              cout<<" Enter book name : ";
              cin>>name[i];
              cout<<" You borrow a book "<<name[i] <<endl; 
            }
        }
        else if( choice==4 )
        {
            for(int i =0; i <n2; i++)
            { cout<<" You veiw borrow book "<<name[i] <<endl; }
        }
        if( choice==5 )
        { 
            cout<<"Exiting Library"<<endl; 
            break;
        }
        cout<<endl;
    }

}
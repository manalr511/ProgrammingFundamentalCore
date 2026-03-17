#include <iostream>
using namespace std;
int main()
{
    int choice;
    string Bn, borrow, issue;
    for (int i = 0; i < 5; i++)
    {
        cout << "-----Library System-----" << endl;
        cout << "1. Add Book" << endl;
        cout << "2.View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter a choice (1-5): " << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the book name:";
            cin >> Bn;
            cout << "Book added successfully."<<endl;
        }
        else if (choice == 2)
        {
            cout << "book viewed:" << Bn<<endl;
        }
        else if (choice == 3)
        {
            cout << "Enter the book name you want to borrow:";
            cin >> borrow;
            cout << "Congratulation,you borrowed a book."<<endl;
        }
        else if (choice == 4)
        {
            cout << "Name the book you want to issue:";
            cin >> issue;
            cout << "Book issued successfully."<<endl;
        }
        else if (choice == 5)
        {
            cout << "Exiting library.Goodbye!";
        }
    }
}
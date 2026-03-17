#include <iostream>
using namespace std;
int main()
{
    int choice, age;
    string name, coursename, username, password;
    name = "";
    coursename = "";
    age = 0;
    for (int i = 1; i <= 3; i++)
    {
        cout << "enter username:";
        cin >> username;
        cout << "enter password:";
        cin >> password;
        if (username == "Admin" && password == "1234")
        {
            cout << "Login succesffull" << endl;
            break;
        }
        else if (i == 3 && !(username == "Admin" && password == "1234"))
        {
            cout << "To many login attempts" << "program ends" << endl;
        }
        else
        {
            cout << "wrong login details" << endl;
            return 0;
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << "----------University Management System----------" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Student" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Exit" << endl;
        cout << "enter choice:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter student name:";
            cin >> name;
            cout << "enter age:";
            cin >> age;
            cout << "student added successfully" << endl;
        }
        else if (choice == 2)
        {
            if (name != "")
            {
                cout << "student name:" << name << endl;
                cout << "student age:" << age << endl;
            }
            else
            {
                cout << "No student record found" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "enter course name:";
            cin >> coursename;
            cout << "course added:" << coursename << endl;
        }
        else if (choice == 4)
        {
            cout << "Program exit" << endl;
            break;
        }
        else
        {
            cout << "invalid choice" << endl;
        }
    }
}

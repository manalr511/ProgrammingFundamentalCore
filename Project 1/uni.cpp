#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int Total_Students = 1000; // total size
    int index = 7;             // we add one in it so that next time user enters info it goes for next student
                               // data structures
    string nameA[Total_Students] = {"manal", "minahil", "ali", "sara", "usman", "zara", "hamza"};
    int ageA[Total_Students] = {19, 20, 21, 19, 22, 20, 21};
    float matricA[Total_Students] = {1050, 890, 960, 1020, 875, 995, 1080};
    float interA[Total_Students] = {980, 850, 910, 970, 820, 940, 1000};
    float ecatA[Total_Students] = {350, 280, 310, 340, 270, 320, 360};
    string pref1A[Total_Students] = {"CE", "CS", "CS", "CE", "IT", "CS", "CE"};
    string pref2A[Total_Students] = {"CS", "CE", "IT", "CS", "CS", "CE", "CS"};
    string pref3A[Total_Students] = {"IT", "CS", "CE", "IT", "CE", "IT", "IT"};
    float aggA[Total_Students];
    while (true)
    {
        // main header of university management system
        system("cls");
        cout << "------------------------------------------------" << endl;
        cout << "----------University Management System----------" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "\n";
        cout << "User Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit " << endl;
        cout << "Choose an option : " << endl;
        string userOption;
        cin >> userOption;
        if (userOption =="1")
        {
            // write here the admin code

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu:Login attempt " << i + 1 << endl;
                string username;
                cout << "Enter username:";
                cin >> username;
                string pw;
                cout << "enter your password:";
                cin >> pw;
                if (username == "admin" && pw == "123")
                {
                    cout << "login successfull ";
                    system("cls");
                    while (true)
                    {
                        cout << "1. show all students " << endl;
                        cout << "2. Search student " << endl;
                        cout << "3. Update student " << endl;
                        cout << "4. Generate merit list " << endl;
                        cout << "5. Delete record by name " << endl;
                        cout << "6. Logout " << endl;
                        cout << "choose and option listed above:" << endl;

                        string adminopt;
                        cin >> adminopt;
                        if (adminopt == "1")
                        {
                            // show students record
                            cout << "name\tage\tmatric\tinter\tecat\tpref1\tpref2\tpref3";
                            for (int i = 0; i < index; i++)
                            {
                                if (nameA[i] != "")
                                {
                                    cout << "\n"
                                         << nameA[i] << "\t" << ageA[i] << "\t" << matricA[i] << "\t" << interA[i] << "\t"
                                         << ecatA[i] << "\t" << pref1A[i] << "\t" << pref2A[i] << "\t" << pref3A[i] << "\t" << endl;
                                }
                            }
                        }
                        else if (adminopt == "2")
                        {
                            // find student by name
                            cout << "enter the student you want to search : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameA[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "name\tage\tmatric\tinter\tecat\tpref1\tpref2\tpref3" << endl;
                                cout << "\n"
                                     << nameA[i] << "\t" << ageA[i] << "\t" << matricA[i] << "\t" << interA[i] << "\t"
                                     << ecatA[i] << "\t" << pref1A[i] << "\t" << pref2A[i] << "\t" << pref3A[i] << "\t";
                            }
                        }
                        else if (adminopt == "3")
                        {
                            // update the student record here
                            cout << "enter the student you want to update record of : ";
                            cout << "\n";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameA[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "--------Old Record--------" << endl;
                                cout << "\n";
                                cout << "name\tage\tmatric\tinter\tecat\tpref1\tpref2\tpref3" << endl;
                                cout << "\n"
                                     << nameA[foundindex] << "\t" << ageA[foundindex] << "\t" << matricA[foundindex] << "\t" << interA[foundindex] << "\t"
                                     << ecatA[foundindex] << "\t" << pref1A[foundindex] << "\t" << pref2A[foundindex] << "\t" << pref3A[foundindex] << "\t" << endl;
                                cout << "Enter new record for update " << endl;
                                string name;
                                cout << "Enter your name:";
                                cin >> name;
                                int age;
                                cout << "Enter your age:";
                                cin >> age;
                                float matric;
                                cout << "Enter your matric marks:";
                                cin >> matric;
                                float inter;
                                cout << "Ente your inter marks:";
                                cin >> inter;
                                int ecat;
                                cout << "Enter ecat marks:";
                                cin >> ecat;
                                cout << "Enter CS,SE,IT as your preferences" << endl;
                                while(true){
                                string pref1;
                                cout << "Enter your first preference:";
                                cin >> pref1;
                                if (pref1=="CS" || pref1=="SE" || pref1=="IT"){
                                    break;
                                }else{
                                    cout<<"you entered a wrong option";
                                }
                                
                                string pref2;
                                cout << "Enter your 2nd preference:";
                                cin >> pref2;
                                string pref3;
                                cout << "Enter your 3rd preference:";
                                cin >> pref3;
                                nameA[foundindex] = name;
                                ageA[foundindex] = age;
                                matricA[foundindex] = matric;
                                interA[foundindex] = inter;
                                ecatA[foundindex] = ecat;
                                pref1A[foundindex] = pref1;
                                pref2A[foundindex] = pref2;
                                pref3A[foundindex] = pref3;
                            }
                        }
                            else
                            {
                                cout << "record not found" << endl;
                            }
                        }
                        else if (adminopt == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float agg = matricA[i] / 1050.0 * 100 * 0.30 + interA[i] / 1100.0 * 100 * 0.40 + ecatA[i] / 400.0 * 100 * 0.3;
                                aggA[i] = agg;
                            }
                            // sorting the data on basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i+1; j < index; j++)
                                {
                                    if (aggA[i] < aggA[j])
                                    {
                                        // swaping of name
                                        string temp = nameA[i];
                                        nameA[i] = nameA[j];
                                        nameA[j] = temp;

                                        // swapping of matric
                                        float tempMatric = matricA[i];
                                        matricA[i] = matricA[j];
                                        matricA[j] = tempMatric;
                                        // swapping of inter
                                        float tempInter = interA[i];
                                        interA[i] = interA[j];
                                        interA[j] = tempInter;
                                        // swapping of ecat
                                        float tempEcat = ecatA[i];
                                        ecatA[i] = ecatA[j];
                                        ecatA[j] = tempEcat;
                                        // swapping of pref1
                                        string tempPref1 = pref1A[i];
                                        pref1A[i] = pref1A[j];
                                        pref1A[j] = tempPref1;

                                        // swapping of pref2
                                        string tempPref2 = pref2A[i];
                                        pref2A[i] = pref2A[j];
                                        pref2A[j] = tempPref2;
                                        // swapping of pref3
                                        string tempPref3 = pref3A[i];
                                        pref3A[i] = pref3A[j];
                                        pref3A[j] = tempPref3;
                                        // swapping of aggrigate
                                        float tempAgg = aggA[i];
                                        aggA[i] = aggA[j];
                                        aggA[j] = tempAgg;
                                    }
                                }
                            }

                            // code to display all data with aggrigate
                            cout << "name\tage\taggrigate";
                            for (int i = 0; i < index; i++)
                            {
                                if (nameA[i] != "")
                                {
                                    cout << "\n"
                                         << nameA[i] << "\t" << ageA[i] << "\t" << aggA[i] << endl;
                                }
                            }

                            // admit students into discipline
                              




                        }
                        else if (adminopt == "5")
                        {
                            // delete by name
                            cout << "enter the student you want to delete : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameA[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                nameA[foundindex] = "";
                                ageA[foundindex] = 0;
                                matricA[foundindex] = 0;
                                interA[foundindex] = 0;
                                ecatA[foundindex] = 0;
                                pref1A[foundindex] = "";
                                pref2A[foundindex] = "";
                                pref3A[foundindex] = "";
                                cout << "Record of " << name << " deleted" << endl;
                            }
                            else
                            {
                                cout << "record not found" << endl;
                            }
                        }
                        else if (adminopt == "6")
                        {
                            // logout
                            break;
                        }
                        else
                        {
                            cout << "wrong option selected";
                        }
                        cout << "press any key to continue:";
                        getch();
                    }
                    cout << "press any key to continue" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "wrong login or password" << endl;
                }
                cout << "press any key to continue:";
                getch(); // takes a character and stops the above code here
            }
        }
        else if (userOption == "2")
        {
            // write here the student code
            system("cls");
            cout << "Welcome to UMS Student Menu" << endl;
            string name;
            cout << "Enter your name:";
            cin >> name;
            int age;
            cout << "Enter your age:";
            cin >> age;
            float matric;
            cout << "Enter your matric marks:";
            cin >> matric;
            float inter;
            cout << "Ente your inter marks:";
            cin >> inter;
            int ecat;
            cout << "Enter ecat marks:";
            cin >> ecat;
            cout << "Enter CS,SE,IT as your preferences" << endl;
            string pref1;
            cout << "Enter your first preference:";
            cin >> pref1;
            string pref2;
            cout << "Enter your 2nd preference:";
            cin >> pref2;
            string pref3;
            cout << "Enter your 3rd preference:";
            cin >> pref3;
            nameA[index] = name;
            ageA[index] = age;
            matricA[index] = matric;
            interA[index] = inter;
            ecatA[index] = ecat;
            pref1A[index] = pref1;
            pref2A[index] = pref2;
            pref3A[index] = pref3;
            index++;
            cout << "Your data has been saved" << endl;
            ;
            cout << "press any key to continue:";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option" << endl;
        }
    } // end of our main while loop
    cout << "Thanks for using this software";
}
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int Total_pets = 1000; // total size;
    int index = 0;
    // data structures
    string petnameA[Total_pets];
    string petageA[Total_pets];
    string breedA[Total_pets];
    string ownernameA[Total_pets];
    string diseaseA[Total_pets];
    string appointmentdateA[Total_pets];
    float totalbillA[Total_pets];
    int visitA[Total_pets] = {0};
    string TdateA[Total_pets];
    string TdesA[Total_pets];
    string assignSA[Total_pets];
    string assignedVetA[Total_pets];
    string historylogA[Total_pets];
    string SnameA[Total_pets];
    string SroleA[Total_pets];
    string SusernameA[Total_pets];
    string SpasswordA[Total_pets];
    int staffindex = 0;
    while (true)
    {
        // main header of veterinary clinical system
        system("cls");
        cout << "\n";
        cout << "-------------------------------------------------------" << endl;
        cout << "--------MNL Veterinary Clinic Management System--------" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "\n";
        cout << "Welcome to MNL veterinary Clinic Management System" << endl;
        cout << "\n";
        cout << "User Menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Staff" << endl;
        cout << "3. Exit " << endl;
        cout << "Choose an option : " << endl;
        int userOpt;
        cin >> userOpt;
        if (userOpt == 1)
        {
            // admin code here
            system("cls");
            cout << "Admin Login" << endl;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Login attempt " << i + 1 << endl;
                string Ausername;
                cout << "Enter username: ";
                cin >> Ausername;
                string Apw;
                cout << "enter your password: ";
                cin >> Apw;
                if (Ausername == "admin" && Apw == "admin123")
                {
                    cout << "login successfull ";
                    cout << "press any key to continue." << endl;
                    getch();
                    while (true)
                    {
                        system("cls");
                        cout << "Welcome to Admin Menu" << endl;
                        cout << "1. View All Pets" << endl;
                        cout << "2. Search Pet" << endl;
                        cout << "3. Update Pet Record" << endl;
                        cout << "4. Delete Pet Record" << endl;
                        cout << "5. View Appointments" << endl;
                        cout << "6. View Treatment Records" << endl;
                        cout << "7. View billing Records" << endl;
                        cout << "8. View assigned vets" << endl;
                        cout << "9. View History Logs" << endl;
                        cout << "10. Manage Staff" << endl;
                        cout << "11. Logout " << endl;
                        cout << "Choose an option: ";
                        int adminOpt;
                        cin >> adminOpt;
                        if (adminOpt == 1)
                        {
                            // view pets here
                            cout << "View all Pets selected" << endl;
                            cout << "Pet's Name\tAge\tBreed\t owner's Name\tDisease" << endl;
                            cout << "-------------------------------------------------------" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                cout << petnameA[i] << "\t\t " << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << endl;
                            }
                            getch();
                        }
                        else if (adminOpt == 2)
                        {
                            // search pets here
                            cout << "Search Pet selected" << endl;                            string name;
                            cout << "Enter the name of pet you want to search: ";
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (petnameA[i] == name)
                                {
                                    cout << "Pet's Name\tAge\tBreed\towner's Name\tDisease" << endl;
                                    cout << "---------------------------------------------------------------" << endl;
                                    cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << "\t" << endl;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record of " << name << " not found" << endl;
                            }
                            getch();
                        }
                        else if (adminOpt == 3)
                        {
                            // update record here
                            cout << "Update Pet record selected" << endl;
                            string name;
                            cout << "Enter the name you want to update record of: ";
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (petnameA[i] == name)
                                {
                                    found = true;
                                    cout << "Old Record is " << endl;
                                    cout << "Pet's Name\tAge\tBreed\tOwner's Name\tDisease" << endl;
                                    cout << "---------------------------------------------------------------" << endl;
                                    cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << endl;
                                    cout << "Enter New record to Update" << endl;
                                    string Pname;
                                    cout << "Enter pet's name: ";
                                    cin.ignore();
                                    getline(cin, Pname);
                                    string Page;
                                    cout << "Enter age: ";
                                    getline(cin, Page);
                                    string breed;
                                    cout << "Enter breed: ";
                                    getline(cin, breed);
                                    string owner;
                                    cout << "Enter name of owner: ";
                                    getline(cin, owner);
                                    string Pdisease;
                                    cout << "Enter current disease: ";
                                    getline(cin, Pdisease);
                                    petnameA[i] = Pname;
                                    petageA[i] = Page;
                                    breedA[i] = breed;
                                    ownernameA[i] = owner;
                                    diseaseA[i] = Pdisease;
                                    cout << "Your data has been updated" << endl;
                                    cout << "press Enter to return back to main menu" << endl;
                                    break;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Pet with name " << name << " not found ";
                            }
                            getch();
                        }
                        else if (adminOpt == 4)
                        {
                            // delete record
                            cout << "Delete Pet Record Selected" << endl;
                            string name;
                            cout << "Enter the name of pet you want to delete: ";
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (petnameA[i] == name)
                                {
                                    found = true;
                                    cout << "Record of " << name << endl;
                                    cout << "Pet's Name\tAge\tBreed\tOwner's Name\tDisease" << endl;
                                    cout << "---------------------------------------------------------------" << endl;
                                    cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << endl;
                                    for (int j = i; j < index - 1; j++)
                                    {
                                        petnameA[j] = petnameA[j + 1];
                                        petageA[j] = petageA[j + 1];
                                        breedA[j] = breedA[j + 1];
                                        ownernameA[j] = ownernameA[j + 1];
                                        diseaseA[j] = diseaseA[j + 1];
                                    }
                                    index = index - 1;
                                    cout << "Record Deleted Successfully " << endl;
                                    break;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Pet with name " << name << " not found ";
                            }
                            getch();
                        }
                        else if (adminOpt == 5)
                        {
                            // view appointment
                            cout << "View Appointments Selected" << endl;
                            cout << "View Appointments Selected" << endl;
                            cout << "Pet's Name\tOwner's Name\tAppointment Date" << endl;
                            cout << "---------------------------------------------------------------" << endl;
                            bool appoint = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (appointmentdateA[i] != " ")
                                {
                                    appoint = true;
                                    cout << petnameA[i] << "\t" << appointmentdateA[i] << "\t" << endl;
                                }
                            }
                            if (appoint == false)
                            {
                                cout << "No appointment booked yet" << endl;
                            }
                            getch();
                        }
                        else if (adminOpt == 6)
                        {
                            // view treatment record
                            cout << "View Treatment Record Selected" << endl;
                            bool TF = false;
                            cout << "Pet's Name\tTreatment Date\tTreatment Description" << endl;
                            cout << "-------------------------------------------------" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (TdateA[i] != "" && TdesA[i] != "")
                                {
                                    TF = true;
                                    cout << petnameA[i] << "\t" << TdateA[i] << "\t" << TdesA[i] << endl;
                                }
                            }
                            if (TF == false)
                            {
                                cout << "No treatment records found." << endl; // If no treatment records are found
                            }
                            getch();
                        }
                        else if (adminOpt == 7)
                        {
                            // view billing
                            system("cls");
                            cout << "View Billing Records Selected" << endl;
                            cout << "View Billing Records Selected" << endl;
                            cout << "==============================" << endl;
                            cout << "Pet Name\tOwner\t\tTotal Bill\tVisits" << endl;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (totalbillA[i] > 0)
                                {
                                    found = true;
                                    cout << petnameA[i] << "\t" << ownernameA[i] << "\t" << totalbillA[i] << "\t" << visitA[i] << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "No billing records found." << endl;
                            }
                            getch();
                        }
                        else if (adminOpt == 8)
                        {
                            // view assigned vets
                            system("cls");
                            cout << "Viewing Assigned Vets Selected" << endl;
                            cout << "Pet's Name\tAssigned Vet" << endl;
                            cout << "------------------------" << endl;

                            bool VA = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (assignedVetA[i] != "")
                                {
                                    VA = true;
                                    cout << petnameA[i] << "\t" << assignedVetA[i] << endl;
                                }
                            }

                            if (VA == false)
                            {
                                cout << "No pets assigned to a vet." << endl;
                            }
                            getch();
                        }
                        else if (adminOpt == 9)
                        {
                            // view history
                            cout << "View History Record Selected" << endl;
                            system("cls");
                            cout << "View History Logs Selected" << endl;
                            cout << "========================================" << endl;
                            cout << "Pet Name\tOwner\t\tVet\t\tTreatment\t\tBill\tVisits" << endl;
                            cout << "========================================" << endl;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (petnameA[i] != "")
                                {
                                    found = true;
                                    cout << "----------------------------------------" << endl;
                                    cout << "Pet Name     : " << petnameA[i] << endl;
                                    cout << "Owner Name   : " << ownernameA[i] << endl;
                                    cout << "Breed        : " << breedA[i] << endl;
                                    cout << "Disease      : " << diseaseA[i] << endl;
                                    cout << "Assigned Vet : " << assignedVetA[i] << endl;
                                    cout << "Treatment    : " << TdesA[i] << endl;
                                    cout << "Treat Date   : " << TdateA[i] << endl;
                                    cout << "Appointment  : " << appointmentdateA[i] << endl;
                                    cout << "Total Bill   : " << totalbillA[i] << endl;
                                    cout << "Visit Count  : " << visitA[i] << endl;
                                    cout << "----------------------------------------" << endl;
                                }
                            }
                            if (found == false)
                            {
                                cout << "No history records found." << endl;
                            }
                            getch();
                        }
                        else if (adminOpt == 10)
                        {
                            // manage staff here
                            system("cls");
                            cout << "Manage Staff Selected" << endl;
                            cout << "1. Add Staff" << endl;
                            cout << "2. View All Staff" << endl;
                            cout << "3. Delete Staff" << endl;
                            cout << "4. Back" << endl;
                            cout << "Choose an option: ";
                            int SMOpt;
                            cin >> SMOpt;

                            if (SMOpt == 1)
                            {
                                system("cls");
                                cout << "Add Staff Selected" << endl;
                                string sname;
                                cout << "Enter staff name: ";
                                cin.ignore();
                                getline(cin, sname);
                                string srole;
                                cout << "Enter staff role: ";
                                getline(cin, srole);
                                string susername;
                                cout << "Enter staff username: ";
                                getline(cin, susername);
                                string spassword;
                                cout << "Enter staff password: ";
                                getline(cin, spassword);
                                SnameA[staffindex] = sname;
                                SroleA[staffindex] = srole;
                                SusernameA[staffindex] = susername;
                                SpasswordA[staffindex] = spassword;
                                staffindex++;
                                cout << "Staff added successfully!" << endl;
                                getch();
                            }
                            else if (SMOpt == 2)
                            {
                                system("cls");
                                cout << "View All Staff Selected" << endl;
                                cout << "========================================" << endl;
                                bool found = false;
                                for (int i = 0; i < staffindex; i++)
                                {
                                    found = true;
                                    cout << "Name     : " << SnameA[i] << endl;
                                    cout << "Role     : " << SroleA[i] << endl;
                                    cout << "Username : " << SusernameA[i] << endl;
                                    cout << "----------------------------------------" << endl;
                                }
                                if (found == false)
                                {
                                    cout << "No staff records found." << endl;
                                }
                                getch();
                            }
                            else if (SMOpt == 3)
                            {
                                system("cls");
                                cout << "Delete Staff Selected" << endl;
                                string sname;
                                cout << "Enter staff name to delete: ";
                                cin.ignore();
                                getline(cin, sname);
                                bool found = false;
                                for (int i = 0; i < staffindex; i++)
                                {
                                    if (SnameA[i] == sname)
                                    {
                                        found = true;
                                        for (int j = i; j < staffindex - 1; j++)
                                        {
                                            SnameA[j] = SnameA[j + 1];
                                            SroleA[j] = SroleA[j + 1];
                                            SusernameA[j] = SusernameA[j + 1];
                                            SpasswordA[j] = SpasswordA[j + 1];
                                        }
                                        staffindex--;
                                        cout << "Staff " << sname << " deleted successfully!" << endl;
                                        break;
                                    }
                                }
                                if (found == false)
                                {
                                    cout << "Staff with name " << sname << " not found." << endl;
                                }
                                getch();
                            }
                            else if (SMOpt == 4)
                            {
                                cout << "Going back to Admin Menu." << endl;
                            }
                            else
                            {
                                cout << "Invalid option." << endl;
                                getch();
                            }
                        }
                        else if (adminOpt == 11)
                        {
                            cout << "You have been logged out";
                            break;
                        }
                        else
                        {
                            cout << "invalid option" << endl;
                            getch();
                        }
                        getch();
                        cout << "press any key to continue";
                    }
                    getch();
                    break;
                }
                else
                {
                    cout << "wrong username or password" << endl;
                    cout << "press any key to continue" << endl;
                    getch();
                }
            }
        }
        else if (userOpt == 2)
        {
            // staff code here
            system("cls");
            cout << "Staff Login" << endl;
            string sun;
            cout << "Enter username: ";
            cin >> sun;
            string spw;
            cout << "Enter password: ";
            cin >> spw;
            if (sun == "staff" && spw == "staff123")
            {
                cout << "Login successful!" << endl;
                cout << "press any key to continue" << endl;
                getch();
                while (true)
                {
                    system("cls");
                    cout << "Welcome to Staff Menu" << endl;
                    cout << "1. Add Pet Record" << endl;
                    cout << "2. View All Pets" << endl;
                    cout << "3. Search Pet" << endl;
                    cout << "4. Update Pet Record" << endl;
                    cout << "5. Book Appointment" << endl;
                    cout << "6. Add Treatment Record" << endl;
                    cout << "7. Generate Bill" << endl;
                    cout << "8. Assign Patients To Vets" << endl;
                    cout << "9. View Pets By Owner's Name" << endl;
                    cout << "10. View pets according to age" << endl;
                    cout << "11. Logout" << endl;
                    cout << "Choose an option: ";
                    int staffOpt;
                    cin >> staffOpt;
                    if (staffOpt == 1)
                    {
                        // add pet record here
                        system("cls");
                        cout << "Add Pet Record Selected" << endl;
                        string Pname;
                        cout << "Enter pet's name: ";
                        cin.ignore();
                        getline(cin, Pname);
                        string Page;
                        cout << "Enter age: ";
                        getline(cin, Page);
                        string breed;
                        cout << "Enter breed: ";
                        getline(cin, breed);
                        string owner;
                        cout << "Enter name of owner: ";
                        getline(cin, owner);
                        string Pdisease;
                        cout << "Enter current disease: ";
                        getline(cin, Pdisease);
                        petnameA[index] = Pname;
                        petageA[index] = Page;
                        breedA[index] = breed;
                        ownernameA[index] = owner;
                        diseaseA[index] = Pdisease;
                        index = index + 1;
                        cout << "Your data has been added" << endl;
                        cout << "press Enter to return back to main menu" << endl;
                        // Data added
                        getch();
                    }
                    else if (staffOpt == 2)
                    {
                        // view all pets here
                        cout << "View All Pets Selected" << endl;
                        cout << "Pet's Name\tAge\tBreed\tOwner's Name\tDisease" << endl;
                        cout << "---------------------------------------------------------------" << endl;
                        for (int i = 0; i < index; i++)
                        {
                            cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << endl;
                        }
                        getch();
                    }
                    else if (staffOpt == 3)
                    {
                        // Search Pet here
                        cout << "Search Pet Selected" << endl;
                        string name;
                        cout << "Enter the name of pet you want to search: ";
                        cin >> name;
                        bool found = false;
                        for (int i = 0; i < index; i++)
                        {
                            if (petnameA[i] == name)
                            {
                                cout << "Pet's Name\tAge\tBreed\towner's Name\tDisease" << endl;
                                cout << "---------------------------------------------------------------" << endl;
                                cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << "\t" << endl;
                                found = true;
                            }
                        }
                        if (found == false)
                        {
                            cout << "Record of " << name << " not found" << endl;
                        }
                        getch();
                    }
                    else if (staffOpt == 4)
                    {
                        // Update Pet Record here
                        cout << "Update Pet Record Selected" << endl;
                        string name;
                        cout << "Enter the name you want to update record of: ";
                        cin >> name;
                        bool found = false;
                        for (int i = 0; i < index; i++)
                        {
                            if (petnameA[i] == name)
                            {
                                found = true;
                                cout << "Old Record is " << endl;
                                cout << "Pet's Name\tAge\tBreed\tOwner's Name\tDisease" << endl;
                                cout << "---------------------------------------------------------------" << endl;
                                cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << endl;
                                cout << "Enter New record to Update" << endl;
                                string Pname;
                                cout << "Enter pet's name: ";
                                cin.ignore();
                                getline(cin, Pname);
                                string Page;
                                cout << "Enter age: ";
                                getline(cin, Page);
                                string breed;
                                cout << "Enter breed: ";
                                getline(cin, breed);
                                string owner;
                                cout << "Enter name of owner: ";
                                getline(cin, owner);
                                string Pdisease;
                                cout << "Enter current disease: ";
                                getline(cin, Pdisease);
                                petnameA[i] = Pname;
                                petageA[i] = Page;
                                breedA[i] = breed;
                                ownernameA[i] = owner;
                                diseaseA[i] = Pdisease;
                                cout << "Your data has been updated" << endl;
                                cout << "press Enter to return back to main menu" << endl;
                                break;
                            }
                        }
                        if (found == false)
                        {
                            cout << "Pet with name " << name << " not found ";
                        }
                        getch();
                    }
                    else if (staffOpt == 5)
                    {
                        // Book Appointment here
                        cout << "Book Appointment Selected" << endl;
                        string name;
                        cout << "Enter pet's name: ";
                        cin.ignore();
                        getline(cin, name);
                        string date;
                        cout << "Enter appointment details (Date/Month/year) : ";
                        getline(cin, date);
                        appointmentdateA[index] = date;
                        petnameA[index] = name;
                        cout << "Appointment booked successfully for " << name << " on " << date << endl;
                        getch();
                    }
                    else if (staffOpt == 6)
                    {
                        // Add Treatment Record here
                        system("cls");
                        cout << "Add Treatment Record Selected" << endl;
                        // Ask for the pet name
                        string name;
                        cout << "Enter pet's name: ";
                        cin.ignore();
                        getline(cin, name);
                        bool found = false;
                        for (int i = 0; i < index; i++)
                        {
                            if (petnameA[i] == name)
                            {
                                found = true;
                                string Tdate;
                                cout << "Enter treatment's date: ";
                                cin.ignore();
                                getline(cin, Tdate);
                                string Tdes;
                                cout << "Enter treatment's description: ";
                                getline(cin, Tdes);
                                // storing in arrays
                                TdateA[i] = Tdate;
                                TdesA[i] = Tdes;
                                cout << "Treament added for: " << name << endl;
                                break;
                            }
                        }
                        if (found == false)
                        {
                            cout << "Pet with name " << name << " not found " << endl;
                        }
                        getch();
                    }
                    else if (staffOpt == 7)
                    {
                        // Generate Bill here
                        cout << "Generate Bill Selected" << endl;
                        string Pname;
                        cout << "Enter pet's name to generate bill: ";
                        cin.ignore();
                        getline(cin, Pname);
                        bool found = false;
                        for (int i = 0; i < index; i++)
                        {
                            if (petnameA[i] == Pname)
                            {
                                found = true;
                                float CFee;
                                float MFee;
                                float TFee;
                                cout << "Enter consultation fee: ";
                                cin >> CFee;
                                cout << "Enter medicine fee: ";
                                cin >> MFee;
                                cout << "Enter treatment fee: ";
                                cin >> TFee;
                                float total = CFee + MFee + TFee;
                                totalbillA[i] = total;
                                visitA[i] = visitA[i] + 1;
                                cout << "\n";
                                cout << "========================================" << endl;
                                cout << "        MNL Veterinary Clinic           " << endl;
                                cout << "========================================" << endl;
                                cout << "Pet Name     : " << petnameA[i] << endl;
                                cout << "Owner Name   : " << ownernameA[i] << endl;
                                cout << "Breed        : " << breedA[i] << endl;
                                cout << "Disease      : " << diseaseA[i] << endl;
                                cout << "Treatment    : " << TdesA[i] << endl;
                                cout << "Assigned Vet : " << assignedVetA[i] << endl;
                                cout << "Visit Count  : " << visitA[i] << endl;
                                cout << "----------------------------------------" << endl;
                                cout << "Consultation Fee : " << CFee << endl;
                                cout << "Medicine Fee     : " << MFee << endl;
                                cout << "Treatment Fee    : " << TFee << endl;
                                cout << "----------------------------------------" << endl;
                                cout << "Total Bill   : " << total << endl;
                                cout << "========================================" << endl;
                                break;
                            }
                        }
                        if (found == false)
                        {
                            cout << "Pet with name " << Pname << " not found." << endl;
                        }

                        getch();
                    }
                    else if (staffOpt == 8)
                    {
                        // View Assigned vet here
                        system("cls");
                        cout << "View Assigned Vet Selected" << endl;
                        string Pname;
                        cout << "Enter pet's name: ";
                        cin.ignore();
                        getline(cin, Pname);
                        bool found = false;
                        for (int i = 0; i < index; i++)
                        {
                            if (petnameA[i] == Pname)
                            {
                                found = true;
                                string Vname;
                                cout << "Enter the name of assigned vet: ";
                                getline(cin, Vname);
                                assignedVetA[i] = Vname;
                                cout << "Vet assigned successfully to " << Pname << endl;
                                break;
                            }
                        }
                        if (found == false)
                        {
                            cout << "Pet with name " << Pname << " not found. " << endl;
                        }
                        getch();
                    }
                    else if (staffOpt == 9)
                    {
                        // view pets by owner here
                        system("cls");
                        cout << "View Pets by Owner" << endl;
                        string ownname;
                        cout << "Enter owner's name: ";
                        cin.ignore();
                        getline(cin, ownname);
                        bool found = false;
                        cout << "pets owned by " << ownname << " are: " << endl;
                        for (int i = 0; i < index; i++)
                        {
                            if (ownernameA[i] == ownname)
                            {
                                found = true;
                                cout << petnameA[i] << " (Age: " << petageA[i] << ", Breed: " << breedA[i] << ", Disease: " << diseaseA[i] << ")" << endl;
                            }
                        }
                        if (found == false)
                        {
                            cout << "No pet found for owner " << ownname << endl;
                        }

                        getch();
                    }
                    else if (staffOpt == 10)
                    {
                        // sort pets by age
                        system("cls");
                        cout << "sort pets by age selected" << endl;
                        for (int i = 0; i < index - 1; i++)
                        {
                            for (int j = i + 1; j < index; j++)
                            {
                                // comparing ages and swapping
                                // swap age
                                if (petageA[i] > petageA[j])
                                {
                                    string tempAge = petageA[i];
                                    petageA[i] = petageA[j];
                                    petageA[j] = tempAge;
                                    // Swap names
                                    string tempName = petnameA[i];
                                    petnameA[i] = petnameA[j];
                                    petnameA[j] = tempName;
                                    // Swap breeds
                                    string tempBreed = breedA[i];
                                    breedA[i] = breedA[j];
                                    breedA[j] = tempBreed;
                                    // Swap owner names
                                    string tempOwner = ownernameA[i];
                                    ownernameA[i] = ownernameA[j];
                                    ownernameA[j] = tempOwner;
                                    // Swap diseases
                                    string tempDisease = diseaseA[i];
                                    diseaseA[i] = diseaseA[j];
                                    diseaseA[j] = tempDisease;
                                }
                            }
                        }
                        // Displaying sorted pets
                        cout << "pets sorted by age: " << endl;
                        for (int i = 0; i < index; i++)
                        {
                            cout << petnameA[i] << " (Age: " << petageA[i] << ", Breed: " << breedA[i] << ", Owner: " << ownernameA[i] << ", Disease: " << diseaseA[i] << ")" << endl;
                        }
                        getch();
                    }
                    else if (staffOpt == 11)
                    {
                        // logout
                        cout << "You have been logged out" << endl;
                        cout << "press any key to continue";
                        getch();
                        break;
                    }
                    else
                    {
                        cout << "Sorry, you entered the wrong option" << endl;
                        getch();
                    }
                }
            }
            else
            {
                cout << "Wrong username or password" << endl;
                cout << "Press any key to continue" << endl;
                getch();
            }
        }
        else if (userOpt == 3)
        {
            break; // Exit the program
        }
        else
        {
            cout << "Oops! It seems like you entered a wrong option. Try again." << endl;
        }
    }

    cout << "Thanks for using MNL Veterinary Clinical Management System" << endl;
}
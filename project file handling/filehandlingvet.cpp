#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;
// file handling array START

// login array for users
string usernameA[100];
string passwordA[100];
string roleA[100];
int usercount = 0;

// file handling array END

// file handling prototype START
void readstaff();
void savestaff();
void readpet();
void savepet();
// file handling prototype END

//  prototypes START
void pausescreen();
void mainHeader();
int mainmenu();
bool adminlogin();
bool stafflogin();
void adminmenu();
void staffmenu();
void manageStaff();
void addPet();
void viewAllPets();
void searchPet();
void updatePetRecord();
void deletePetRecord();
void bookAppointment();
void viewAppointments();
void addTreatmentRecord();
void viewTreatmentRecords();
void generateBill();
void viewBillingRecords();
void assignVet();
void viewAssignedVets();
void viewHistoryLogs();
void viewPetsByOwner();
void sortPetsByAge();
void addStaff();
void viewAllStaff();
void deleteStaff();
int findPetByName(string name);
// prototypes END

// Data structure START (global)
const int TOTAL_PETS = 1000;
// PET ARRAY
int petindex = 0;
string petnameA[TOTAL_PETS];
string petageA[TOTAL_PETS];
string breedA[TOTAL_PETS];
string ownernameA[TOTAL_PETS];
string diseaseA[TOTAL_PETS];
string appointmentdateA[TOTAL_PETS];
float totalbillA[TOTAL_PETS] = {0};
int visitA[TOTAL_PETS] = {0};
string TdateA[TOTAL_PETS];
string TdesA[TOTAL_PETS];
string assignedVetA[TOTAL_PETS];

// STAFF ARRAY
int staffindex = 0;
string SusernameA[TOTAL_PETS];
string SpasswordA[TOTAL_PETS];
string SnameA[TOTAL_PETS];
string SroleA[TOTAL_PETS];
// Data structure END
int main() // main function START
{
    readstaff();
    readpet();
    while (true)
    {
        int userOpt = mainmenu();

        if (userOpt == 1) // if admin selected
        {
            if (adminlogin()) // ask admin login
            {
                adminmenu(); // show admin menu
            }
        }
        else if (userOpt == 2) // if staff selected
        {
            if (stafflogin()) // ask staff login
            {
                staffmenu(); // show staff meny
            }
        }
        else if (userOpt == 3)
        {
            break;
        }
        else
        {
            cout << "Oops! You entered a wrong option. Try again." << endl;
            pausescreen();
        }
    }

    cout << "Thanks for using MNL Veterinary Clinic Management System" << endl;
    return 0;

} // main function END

// functions implementation START
void pausescreen()
{
    cout << "press any key to continue ";
    getch();
}

void mainHeader()
{
    system("cls");
    cout << "--------------------------------------------------------" << endl;
    cout << "--------MNL Veterinary Clinic Management System---------" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "---Welcome to MNL Veterinary Clinic Management System---" << endl;
}

int mainmenu()
{
    system("cls");
    cout << "Main Menu" << endl;
    cout << "1. Admin " << endl;
    cout << "2. Staff " << endl;
    cout << "3. Exit " << endl;
    int opt;
    cout << "Choose an option : ";
    cin >> opt;
    return opt;
}

bool adminlogin()
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << "Admin Login Attempt " << i + 1 << endl;
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == "admin" && password == "admin123")
        {
            cout << "Login successful!" << endl;
            pausescreen();
            return true;
        }
        else
        {
            cout << "Wrong username or password." << endl;
            pausescreen();
        }
    }
    return false;
}

bool stafflogin()
{
    system("cls");
    cout << "Staff Login" << endl;
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "staff" && password == "staff123")
    {
        cout << "Login successful!" << endl;
        pausescreen();
        return true;
    }

    // Also allow staff added by admin
    for (int i = 0; i < staffindex; i++)
    {
        if (SusernameA[i] == username && SpasswordA[i] == password)
        {
            cout << "Login successful!" << endl;
            pausescreen();
            return true;
        }
    }

    cout << "Wrong username or password." << endl;
    pausescreen();
    return false;
}

void adminmenu()
{
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
        cout << "7. View Billing Records" << endl;
        cout << "8. View Assigned Vets" << endl;
        cout << "9. View History Logs" << endl;
        cout << "10. Manage Staff" << endl;
        cout << "11. Logout" << endl;
        cout << "Choose an option: ";
        int opt;
        cin >> opt;

        if (opt == 1)
            viewAllPets();
        else if (opt == 2)
            searchPet();
        else if (opt == 3)
            updatePetRecord();
        else if (opt == 4)
            deletePetRecord();
        else if (opt == 5)
            viewAppointments();
        else if (opt == 6)
            viewTreatmentRecords();
        else if (opt == 7)
            viewBillingRecords();
        else if (opt == 8)
            viewAssignedVets();
        else if (opt == 9)
            viewHistoryLogs();
        else if (opt == 10)
            manageStaff();
        else if (opt == 11)
            break;
        else
        {
            cout << "Invalid option. " << endl;
            pausescreen();
        }
    }
}

void staffmenu()
{
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
        cout << "8. Assign Patient To Vet" << endl;
        cout << "9. View Pets By Owner Name" << endl;
        cout << "10. View Pets According To Age" << endl;
        cout << "11. Logout" << endl;
        cout << "Choose an option: ";
        int opt;
        cin >> opt;

        if (opt == 1)
            addPet();
        else if (opt == 2)
            viewAllPets();
        else if (opt == 3)
            searchPet();
        else if (opt == 4)
            updatePetRecord();
        else if (opt == 5)
            bookAppointment();
        else if (opt == 6)
            addTreatmentRecord();
        else if (opt == 7)
            generateBill();
        else if (opt == 8)
            assignVet();
        else if (opt == 9)
            viewPetsByOwner();
        else if (opt == 10)
            sortPetsByAge();
        else if (opt == 11)
            break;
        else
        {
            cout << "invalid option. " << endl;
            pausescreen();
        }
    }
}

void addPet()
{
    system("cls");
    if (petindex > TOTAL_PETS)
    {
        cout << "Pet record limit is full" << endl;
        pausescreen();
        return;
    }

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
    petnameA[petindex] = Pname;
    petageA[petindex] = Page;
    breedA[petindex] = breed;
    ownernameA[petindex] = owner;
    diseaseA[petindex] = Pdisease;
    petindex = petindex + 1;
    savepet();
    cout << "Your data has been added" << endl;
    pausescreen();
}

void viewAllPets()
{
    system("cls");
    cout << "Pet's Name\tAge\tBreed\tOwner's Name\tDisease" << endl;
    cout << "---------------------------------------------------------------" << endl;
    if (petindex == 0)
    {
        cout << "No Pet found." << endl;
    }
    for (int i = 0; i < petindex; i++)
    {
        cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << endl;
    }
    pausescreen();
}

void searchPet()
{
    system("cls");
    cout << "Search Pet Selected" << endl;
    string name;
    cout << "Enter pet name: ";
    cin >> name;
    bool found = false;
    for (int i = 0; i < petindex; i++)
    {
        if (petnameA[i] == name)
        {
            cout << "Pet's Name\tAge\tBreed\tOwner's Name\tDisease" << endl;
            cout << "---------------------------------------------------------------" << endl;
            cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "Record of " << name << " not found." << endl;
    }
    pausescreen();
}

void updatePetRecord()
{
    system("cls");
    cout << "Update Pet Record Selected" << endl;
    string name;
    cin.ignore();
    cout << "Enter pet name to update: ";
    getline(cin, name);
    bool found = false;
    // showing old record
    for (int i = 0; i < petindex; i++)
    {
        if (petnameA[i] == name)
        {
            found = true;
            cout << "\nOld Record:" << endl;
            cout << petnameA[i] << " " << petageA[i] << " " << breedA[i]
                 << " " << ownernameA[i] << " " << diseaseA[i] << endl;
            cin.ignore();
            cout << "Enter new pet name: ";
            getline(cin, petnameA[i]);
            cout << "Enter new age: ";
            getline(cin, petageA[i]);
            cout << "Enter new breed: ";
            getline(cin, breedA[i]);
            cout << "Enter new owner name: ";
            getline(cin, ownernameA[i]);
            cout << "Enter new disease: ";
            getline(cin, diseaseA[i]);
            savepet();
            cout << "\nPet record updated successfully." << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << "Pet with name " << name << " not found. " << endl;
    }
    pausescreen();
}
void deletePetRecord()
{
    system("cls");
    cout << "Delete Pet Record Selected" << endl;
    cin.ignore();
    string name;
    cout << "Enter pet name to update: ";
    getline(cin, name);
    bool found = false;
    // searching pet
    for (int i = 0; i < petindex; i++)
    {
        if (petnameA[i] == name)
        {
            found = true;

            for (int j = i; j < petindex - 1; j++)
            {

                petnameA[j] = petnameA[j + 1];
                petageA[j] = petageA[j + 1];
                breedA[j] = breedA[j + 1];
                ownernameA[j] = ownernameA[j + 1];
                diseaseA[j] = diseaseA[j + 1];
                appointmentdateA[j] = appointmentdateA[j + 1];
                totalbillA[j] = totalbillA[j + 1];
                visitA[j] = visitA[j + 1];
                TdateA[j] = TdateA[j + 1];
                TdesA[j] = TdesA[j + 1];
                assignedVetA[j] = assignedVetA[j + 1];
            }
            petindex = petindex - 1;
            savepet();
            cout << "Record deleted successfully." << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << "Pet with name " << name << " not found." << endl;
    }
    pausescreen();
}

void bookAppointment()
{
    system("cls");
    cout << "Book Appointment Selected" << endl;

    cin.ignore(1000, '\n'); // clear leftover input
    string name;
    cout << "Enter pet name: ";
    getline(cin, name);
    bool found = false;
    for (int i = 0; i < petindex; i++)
    {
        if (petnameA[i] == name)
        {
            found = true;
            cout << "Enter appointment date (dd/mm/yyyy): ";
            getline(cin, appointmentdateA[i]);
            savepet();
            cout << "Appointment booked successfully." << endl;
            break;
        }
    }

    if (found == false)
    {
        cout << "Pet not found. Please add the pet record first." << endl;
    }

    pausescreen();
}

void viewAppointments()
{
    system("cls");
    cout << "Pet Name\tOwner Name\tAppointment Date" << endl;
    cout << "---------------------------------------------------------------" << endl;
    bool found = false;

    for (int i = 0; i < petindex; i++)
    {
        if (appointmentdateA[i] != "")
        {
            found = true;
            cout << petnameA[i] << "\t" << ownernameA[i] << "\t" << appointmentdateA[i] << endl;
        }
    }

    if (!found)
    {
        cout << "No appointment booked yet." << endl;
    }
    pausescreen();
}

void addTreatmentRecord()
{
    system("cls");
    cout << "Add Treatment Selected" << endl;
    string name;
    cin.ignore();
    cout << "Enter pet name: ";
    getline(cin, name);
    bool found = false;
    for (int i = 0; i < petindex; i++)
    {
        if (petnameA[i] == name)
        {
            found = true;
            cout << "Enter treatment date: ";
            getline(cin, TdateA[i]);
            cout << "Enter treatment description: ";
            getline(cin, TdesA[i]);
            savepet();
            cout << "Treatment record added successfully." << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << "Pet with name " << name << " not found." << endl;
    }
    pausescreen();
}

void viewTreatmentRecords()
{
    system("cls");
    cout << "Pet Name\tTreatment Date\tTreatment Description\n";
    cout << "-------------------------------------------------\n";

    bool found = false;

    for (int i = 0; i < petindex; i++)
    {
        if (TdateA[i] != "" || TdesA[i] != "")
        {
            cout << petnameA[i] << "\t"
                 << TdateA[i] << "\t"
                 << TdesA[i] << endl;
            found = true;
        }
    }

    if (found == false)
        cout << "No treatment records found." << endl;
    pausescreen();
}

void generateBill()
{
    system("cls");
    cout << "Generate Bill Selected" << endl;

    string name;
    cin.ignore();
    cout << "Enter pet name: ";
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < petindex; i++)
    {
        if (petnameA[i] == name)
        {
            found = true;
            float CFee, MFee, TFee;
            cout << "Enter consultation fee: ";
            cin >> CFee;
            cout << "Enter medicine fee: ";
            cin >> MFee;
            cout << "Enter treatment fee: ";
            cin >> TFee;
            totalbillA[i] = CFee + MFee + TFee;
            visitA[i]++;
            savepet();
            // Print bill
            cout << "\n========================================\n";
            cout << "        MNL Veterinary Clinic\n";
            cout << "========================================\n";
            cout << "Pet Name     : " << petnameA[i] << endl;
            cout << "Owner Name   : " << ownernameA[i] << endl;
            cout << "Breed        : " << breedA[i] << endl;
            cout << "Disease      : " << diseaseA[i] << endl;
            cout << "Treatment    : " << TdesA[i] << endl;
            cout << "Assigned Vet : " << assignedVetA[i] << endl;
            cout << "Visit Count  : " << visitA[i] << endl;
            cout << "----------------------------------------\n";
            cout << "Consultation Fee : " << CFee << endl;
            cout << "Medicine Fee     : " << MFee << endl;
            cout << "Treatment Fee    : " << TFee << endl;
            cout << "----------------------------------------\n";
            cout << "Total Bill       : " << totalbillA[i] << endl;
            cout << "========================================\n";

            break;
        }
    }

    if (found == false)
    {
        cout << "Pet with name " << name << " not found." << endl;
    }

    pausescreen();
}
void viewBillingRecords()
{
    system("cls");
    cout << "Pet Name\tOwner\tTotal Bill\tVisits" << endl;
    cout << "-------------------------------------------------" << endl;
    bool found = false;

    for (int i = 0; i < petindex; i++)
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
    pausescreen();
}

void assignVet()
{
    system("cls");
    cout << "Assign Vet Selected" << endl;

    string name;
    cin.ignore();
    cout << "Enter pet name: ";
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < petindex; i++)
    {
        if (petnameA[i] == name)
        {
            found = true;

            cout << "Enter assigned vet name: ";
            getline(cin, assignedVetA[i]);
            savepet();
            cout << "Vet assigned successfully." << endl;
            break;
        }
    }

    if (found == false)
        cout << "Pet with name " << name << " not found." << endl;

    pausescreen();
}

void viewAssignedVets()
{
    system("cls");
    cout << "Pet Name\tAssigned Vet" << endl;
    cout << "------------------------" << endl;
    bool found = false;

    for (int i = 0; i < petindex; i++)
    {
        if (assignedVetA[i] != "")
        {
            found = true;
            cout << petnameA[i] << "\t" << assignedVetA[i] << endl;
        }
    }

    if (found == false)
    {
        cout << "No pets assigned to a vet." << endl;
    }
    pausescreen();
}
void viewHistoryLogs()
{
    system("cls");
    cout << "View History Logs Selected" << endl;
    cout << "========================================" << endl;

    if (petindex == 0)
    {
        cout << "No history records found." << endl;
    }

    for (int i = 0; i < petindex; i++)
    {
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
    }
    pausescreen();
}
void viewPetsByOwner()
{
    system("cls");
    cout << "View Pets By Owner Selected" << endl;
    string owner;
    cin.ignore();
    cout << "Enter owner name: ";
    getline(cin, owner);

    bool found = false;
    for (int i = 0; i < petindex; i++)
    {
        if (ownernameA[i] == owner)
        {
            found = true;
            cout << petnameA[i] << " (Age: " << petageA[i] << ", Breed: " << breedA[i] << ", Disease: " << diseaseA[i] << ")" << endl;
        }
    }

    if (found == false)
    {
        cout << "No pet found for owner " << owner << endl;
    }
    pausescreen();
}
void sortPetsByAge()
{
    system("cls");
    cout << "Pets Sorted By Age" << endl;

    for (int i = 0; i < petindex - 1; i++)
    {
        for (int j = i + 1; j < petindex; j++)
        {
            if (petageA[i] > petageA[j])
            {
                swap(petnameA[i], petnameA[j]);
                swap(petageA[i], petageA[j]);
                swap(breedA[i], breedA[j]);
                swap(ownernameA[i], ownernameA[j]);
                swap(diseaseA[i], diseaseA[j]);
                swap(appointmentdateA[i], appointmentdateA[j]);
                swap(totalbillA[i], totalbillA[j]);
                swap(visitA[i], visitA[j]);
                swap(TdateA[i], TdateA[j]);
                swap(TdesA[i], TdesA[j]);
                swap(assignedVetA[i], assignedVetA[j]);
            }
        }
    }

    for (int i = 0; i < petindex; i++)
    {
        cout << petnameA[i] << " (Age: " << petageA[i] << ", Breed: " << breedA[i] << ", Owner: " << ownernameA[i] << ", Disease: " << diseaseA[i] << ")" << endl;
    }
    pausescreen();
}

void manageStaff()
{
    while (true)
    {
        system("cls");
        cout << "Manage Staff Selected" << endl;
        cout << "1. Add Staff" << endl;
        cout << "2. View All Staff" << endl;
        cout << "3. Delete Staff" << endl;
        cout << "4. Back" << endl;
        cout << "Choose an option: ";
        int opt;
        cin >> opt;

        if (opt == 1)
            addStaff();
        else if (opt == 2)
            viewAllStaff();
        else if (opt == 3)
            deleteStaff();
        else if (opt == 4)
            break;
        else
        {
            cout << "Invalid option." << endl;
            pausescreen();
        }
    }
}

void addStaff()
{
    system("cls");
    if (staffindex >= TOTAL_PETS)
    {
        cout << "Staff limit is full." << endl;
        pausescreen();
        return;
    }

    cin.ignore();
    cout << "Enter staff name: ";
    getline(cin, SnameA[staffindex]);
    cout << "Enter staff role: ";
    getline(cin, SroleA[staffindex]);
    cout << "Enter staff username: ";
    getline(cin, SusernameA[staffindex]);
    cout << "Enter staff password: ";
    getline(cin, SpasswordA[staffindex]);

    staffindex++;
    savestaff();
    cout << "Staff added successfully." << endl;
    pausescreen();
}

void viewAllStaff()
{
    system("cls");
    if (staffindex == 0)
    {
        cout << "No staff records found." << endl;
    }

    for (int i = 0; i < staffindex; i++)
    {
        cout << "Name     : " << SnameA[i] << endl;
        cout << "Role     : " << SroleA[i] << endl;
        cout << "Username : " << SusernameA[i] << endl;
        cout << "----------------------------------------" << endl;
    }
    pausescreen();
}

void deleteStaff()
{
    system("cls");
    string name;
    cin.ignore();
    cout << "Enter staff name to delete: ";
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < staffindex; i++)
    {
        if (SnameA[i] == name)
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
            savestaff();
            cout << "Staff deleted successfully." << endl;
            break;
        }
    }

    if (found == false)
    {
        cout << "Staff with name " << name << " not found." << endl;
    }
    pausescreen();
}

// functions implimentation END
// START OF FILE HANDLING
// staff read/load
void readstaff()
{
    fstream file;
    file.open("staff.txt", ios::in);
    if (!file)
    {
        cout << "File not found" << endl;
        return;
    }
    staffindex = 0;
    while (file >> SnameA[staffindex] >> SroleA[staffindex] >> SusernameA[staffindex] >> SpasswordA[staffindex])
    {
        staffindex++;
    }
    file.close();
}
// staff save/write
void savestaff()
{
    fstream file;
    file.open("staff.txt", ios::out);
    if (!file)
    {
        cout << "File not found" << endl;
        return;
    }
    for (int i = 0; i < staffindex; i++)
    {
        file << SnameA[i] << " " << SroleA[i] << " " << SusernameA[i] << " " << SpasswordA[i] << " " << endl;
    }
    file.close();
}

// pet load/read
void readpet()
{
    fstream pfile;
    pfile.open("pet.txt", ios::in);
    if (!pfile)
    {
        cout << "file not found " << endl;
        return;
    }

    petindex = 0;
    string billF, visitF;
    while (petindex < TOTAL_PETS &&
           getline(pfile, petnameA[petindex], '|') &&
           getline(pfile, petageA[petindex], '|') &&
           getline(pfile, breedA[petindex], '|') &&
           getline(pfile, ownernameA[petindex], '|') &&
           getline(pfile, diseaseA[petindex], '|') &&
           getline(pfile, appointmentdateA[petindex], '|') &&
           getline(pfile, TdateA[petindex], '|') &&
           getline(pfile, TdesA[petindex], '|') &&
           getline(pfile, billF, '|') &&
           getline(pfile, visitF, '|') &&
           getline(pfile, assignedVetA[petindex]))

    {
        totalbillA[petindex] = stof(billF);
        visitA[petindex] = stoi(visitF);
        petindex++;
    }
    pfile.close();
}

// pet save/write
void savepet()
{
    fstream pfile;
    pfile.open("pet.txt", ios::out);
    if (!pfile)
    {
        cout << "file not found " << endl;
        return;
    }
    for (int i = 0; i < petindex; i++)
    {
        pfile << petnameA[i] << "|"
              << petageA[i] << "|"
              << breedA[i] << "|"
              << ownernameA[i] << "|"
              << diseaseA[i] << "|"
              << appointmentdateA[i] << "|"
              << TdateA[i] << "|"
              << TdesA[i] << "|"
              << totalbillA[i] << "|"
              << visitA[i] << "|"
              << assignedVetA[i] << endl;
    }
    pfile.close();
}

// treatment load/read
// END OF FILE HANDLING
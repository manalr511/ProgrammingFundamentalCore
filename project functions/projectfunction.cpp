#include <iostream>
#include <conio.h>
using namespace std;

const int TOTAL_PETS = 1000;

// Pet arrays
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

// Staff arrays
string SnameA[TOTAL_PETS];
string SroleA[TOTAL_PETS];
string SusernameA[TOTAL_PETS];
string SpasswordA[TOTAL_PETS];

int petIndex = 0;
int staffIndex = 0;

// Function prototypes
void pauseScreen();
void mainHeader();
int mainMenu();
bool adminLogin();
bool staffLogin();
void adminMenu();
void staffMenu();
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
//main function start
int main()
{
    while (true)
    {
        int userOpt = mainMenu();

        if (userOpt == 1)
        {
            if (adminLogin())
            {
                adminMenu();
            }
        }
        else if (userOpt == 2)
        {
            if (staffLogin())
            {
                staffMenu();
            }
        }
        else if (userOpt == 3)
        {
            break;
        }
        else
        {
            cout << "Oops! You entered a wrong option. Try again." << endl;
            pauseScreen();
        }
    }

    cout << "Thanks for using MNL Veterinary Clinic Management System" << endl;
    return 0;
}

void pauseScreen()
{
    cout << "\nPress any key to continue...";
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

int mainMenu()
{
    mainHeader();
    cout << "User Menu" << endl;
    cout << "1. Admin" << endl;
    cout << "2. Staff" << endl;
    cout << "3. Exit" << endl;
    cout << "Choose an option: ";
    int opt;
    cin >> opt;
    return opt;
}
//admin login
bool adminLogin()
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
            pauseScreen();
            return true;
        }
        else
        {
            cout << "Wrong username or password." << endl;
            pauseScreen();
        }
    }
    return false;
}

bool staffLogin()
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
        pauseScreen();
        return true;
    }

    // Also allow staff added by admin
    for (int i = 0; i < staffIndex; i++)
    {
        if (SusernameA[i] == username && SpasswordA[i] == password)
        {
            cout << "Login successful!" << endl;
            pauseScreen();
            return true;
        }
    }

    cout << "Wrong username or password." << endl;
    pauseScreen();
    return false;
}

void adminMenu()
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

        if (opt == 1) viewAllPets();
        else if (opt == 2) searchPet();
        else if (opt == 3) updatePetRecord();
        else if (opt == 4) deletePetRecord();
        else if (opt == 5) viewAppointments();
        else if (opt == 6) viewTreatmentRecords();
        else if (opt == 7) viewBillingRecords();
        else if (opt == 8) viewAssignedVets();
        else if (opt == 9) viewHistoryLogs();
        else if (opt == 10) manageStaff();
        else if (opt == 11) break;
        else
        {
            cout << "Invalid option." << endl;
            pauseScreen();
        }
    }
}

void staffMenu()
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

        if (opt == 1) addPet();
        else if (opt == 2) viewAllPets();
        else if (opt == 3) searchPet();
        else if (opt == 4) updatePetRecord();
        else if (opt == 5) bookAppointment();
        else if (opt == 6) addTreatmentRecord();
        else if (opt == 7) generateBill();
        else if (opt == 8) assignVet();
        else if (opt == 9) viewPetsByOwner();
        else if (opt == 10) sortPetsByAge();
        else if (opt == 11) break;
        else
        {
            cout << "Invalid option." << endl;
            pauseScreen();
        }
    }
}

int findPetByName(string name)
{
    for (int i = 0; i < petIndex; i++)
    {
        if (petnameA[i] == name)
        {
            return i;
        }
    }
    return -1;
}

void addPet()
{
    system("cls");
    if (petIndex >= TOTAL_PETS)
    {
        cout << "Pet record limit is full." << endl;
        pauseScreen();
        return;
    }

    cout << "Add Pet Record Selected" << endl;
    cin.ignore();
    cout << "Enter pet's name: ";
    getline(cin, petnameA[petIndex]);
    cout << "Enter age: ";
    getline(cin, petageA[petIndex]);
    cout << "Enter breed: ";
    getline(cin, breedA[petIndex]);
    cout << "Enter owner name: ";
    getline(cin, ownernameA[petIndex]);
    cout << "Enter current disease: ";
    getline(cin, diseaseA[petIndex]);

    petIndex++;
    cout << "Pet record added successfully." << endl;
    pauseScreen();
}

void viewAllPets()
{
    system("cls");
    cout << "Pet's Name\tAge\tBreed\tOwner's Name\tDisease" << endl;
    cout << "---------------------------------------------------------------" << endl;

    if (petIndex == 0)
    {
        cout << "No pet records found." << endl;
    }

    for (int i = 0; i < petIndex; i++)
    {
        cout << petnameA[i] << "\t" << petageA[i] << "\t" << breedA[i] << "\t" << ownernameA[i] << "\t" << diseaseA[i] << endl;
    }
    pauseScreen();
}

void searchPet()
{
    system("cls");
    cout << "Search Pet Selected" << endl;
    string name;
    cout << "Enter pet name: ";
    cin >> name;

    int pos = findPetByName(name);
    if (pos == -1)
    {
        cout << "Record of " << name << " not found." << endl;
    }
    else
    {
        cout << "Pet's Name\tAge\tBreed\tOwner's Name\tDisease" << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << petnameA[pos] << "\t" << petageA[pos] << "\t" << breedA[pos] << "\t" << ownernameA[pos] << "\t" << diseaseA[pos] << endl;
    }
    pauseScreen();
}

void updatePetRecord()
{
    system("cls");
    cout << "Update Pet Record Selected" << endl;
    string name;
    cout << "Enter pet name to update: ";
    cin >> name;

    int pos = findPetByName(name);
    if (pos == -1)
    {
        cout << "Pet with name " << name << " not found." << endl;
        pauseScreen();
        return;
    }

    cout << "Old Record:" << endl;
    cout << petnameA[pos] << " " << petageA[pos] << " " << breedA[pos] << " " << ownernameA[pos] << " " << diseaseA[pos] << endl;

    cin.ignore();
    cout << "Enter new pet name: ";
    getline(cin, petnameA[pos]);
    cout << "Enter new age: ";
    getline(cin, petageA[pos]);
    cout << "Enter new breed: ";
    getline(cin, breedA[pos]);
    cout << "Enter new owner name: ";
    getline(cin, ownernameA[pos]);
    cout << "Enter new disease: ";
    getline(cin, diseaseA[pos]);

    cout << "Pet record updated successfully." << endl;
    pauseScreen();
}

void deletePetRecord()
{
    system("cls");
    cout << "Delete Pet Record Selected" << endl;
    string name;
    cout << "Enter pet name to delete: ";
    cin >> name;

    int pos = findPetByName(name);
    if (pos == -1)
    {
        cout << "Pet with name " << name << " not found." << endl;
        pauseScreen();
        return;
    }

    for (int j = pos; j < petIndex - 1; j++)
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

    petIndex--;
    cout << "Record deleted successfully." << endl;
    pauseScreen();
}

void bookAppointment()
{
    system("cls");
    cout << "Book Appointment Selected" << endl;
    string name;
    cin.ignore();
    cout << "Enter pet name: ";
    getline(cin, name);

    int pos = findPetByName(name);
    if (pos == -1)
    {
        cout << "Pet not found. Please add pet record first." << endl;
        pauseScreen();
        return;
    }

    cout << "Enter appointment date: ";
    getline(cin, appointmentdateA[pos]);
    cout << "Appointment booked successfully." << endl;
    pauseScreen();
}

void viewAppointments()
{
    system("cls");
    cout << "Pet Name\tOwner Name\tAppointment Date" << endl;
    cout << "---------------------------------------------------------------" << endl;
    bool found = false;

    for (int i = 0; i < petIndex; i++)
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
    pauseScreen();
}

void addTreatmentRecord()
{
    system("cls");
    cout << "Add Treatment Record Selected" << endl;
    string name;
    cin.ignore();
    cout << "Enter pet name: ";
    getline(cin, name);

    int pos = findPetByName(name);
    if (pos == -1)
    {
        cout << "Pet with name " << name << " not found." << endl;
        pauseScreen();
        return;
    }

    cout << "Enter treatment date: ";
    getline(cin, TdateA[pos]);
    cout << "Enter treatment description: ";
    getline(cin, TdesA[pos]);
    cout << "Treatment record added successfully." << endl;
    pauseScreen();
}

void viewTreatmentRecords()
{
    system("cls");
    cout << "Pet Name\tTreatment Date\tTreatment Description" << endl;
    cout << "-------------------------------------------------" << endl;
    bool found = false;

    for (int i = 0; i < petIndex; i++)
    {
        if (TdateA[i] != "" || TdesA[i] != "")
        {
            found = true;
            cout << petnameA[i] << "\t" << TdateA[i] << "\t" << TdesA[i] << endl;
        }
    }

    if (!found)
    {
        cout << "No treatment records found." << endl;
    }
    pauseScreen();
}

void generateBill()
{
    system("cls");
    cout << "Generate Bill Selected" << endl;
    string name;
    cin.ignore();
    cout << "Enter pet name: ";
    getline(cin, name);

    int pos = findPetByName(name);
    if (pos == -1)
    {
        cout << "Pet with name " << name << " not found." << endl;
        pauseScreen();
        return;
    }

    float CFee, MFee, TFee;
    cout << "Enter consultation fee: ";
    cin >> CFee;
    cout << "Enter medicine fee: ";
    cin >> MFee;
    cout << "Enter treatment fee: ";
    cin >> TFee;

    totalbillA[pos] = CFee + MFee + TFee;
    visitA[pos]++;

    cout << "\n========================================" << endl;
    cout << "        MNL Veterinary Clinic" << endl;
    cout << "========================================" << endl;
    cout << "Pet Name     : " << petnameA[pos] << endl;
    cout << "Owner Name   : " << ownernameA[pos] << endl;
    cout << "Breed        : " << breedA[pos] << endl;
    cout << "Disease      : " << diseaseA[pos] << endl;
    cout << "Treatment    : " << TdesA[pos] << endl;
    cout << "Assigned Vet : " << assignedVetA[pos] << endl;
    cout << "Visit Count  : " << visitA[pos] << endl;
    cout << "----------------------------------------" << endl;
    cout << "Consultation Fee : " << CFee << endl;
    cout << "Medicine Fee     : " << MFee << endl;
    cout << "Treatment Fee    : " << TFee << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total Bill       : " << totalbillA[pos] << endl;
    cout << "========================================" << endl;
    pauseScreen();
}

void viewBillingRecords()
{
    system("cls");
    cout << "Pet Name\tOwner\tTotal Bill\tVisits" << endl;
    cout << "-------------------------------------------------" << endl;
    bool found = false;

    for (int i = 0; i < petIndex; i++)
    {
        if (totalbillA[i] > 0)
        {
            found = true;
            cout << petnameA[i] << "\t" << ownernameA[i] << "\t" << totalbillA[i] << "\t" << visitA[i] << endl;
        }
    }

    if (!found)
    {
        cout << "No billing records found." << endl;
    }
    pauseScreen();
}

void assignVet()
{
    system("cls");
    cout << "Assign Vet Selected" << endl;
    string name;
    cin.ignore();
    cout << "Enter pet name: ";
    getline(cin, name);

    int pos = findPetByName(name);
    if (pos == -1)
    {
        cout << "Pet with name " << name << " not found." << endl;
        pauseScreen();
        return;
    }

    cout << "Enter assigned vet name: ";
    getline(cin, assignedVetA[pos]);
    cout << "Vet assigned successfully." << endl;
    pauseScreen();
}

void viewAssignedVets()
{
    system("cls");
    cout << "Pet Name\tAssigned Vet" << endl;
    cout << "------------------------" << endl;
    bool found = false;

    for (int i = 0; i < petIndex; i++)
    {
        if (assignedVetA[i] != "")
        {
            found = true;
            cout << petnameA[i] << "\t" << assignedVetA[i] << endl;
        }
    }

    if (!found)
    {
        cout << "No pets assigned to a vet." << endl;
    }
    pauseScreen();
}

void viewHistoryLogs()
{
    system("cls");
    cout << "View History Logs Selected" << endl;
    cout << "========================================" << endl;

    if (petIndex == 0)
    {
        cout << "No history records found." << endl;
    }

    for (int i = 0; i < petIndex; i++)
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
    pauseScreen();
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
    for (int i = 0; i < petIndex; i++)
    {
        if (ownernameA[i] == owner)
        {
            found = true;
            cout << petnameA[i] << " (Age: " << petageA[i] << ", Breed: " << breedA[i] << ", Disease: " << diseaseA[i] << ")" << endl;
        }
    }

    if (!found)
    {
        cout << "No pet found for owner " << owner << endl;
    }
    pauseScreen();
}

void sortPetsByAge()
{
    system("cls");
    cout << "Pets Sorted By Age" << endl;

    for (int i = 0; i < petIndex - 1; i++)
    {
        for (int j = i + 1; j < petIndex; j++)
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

    for (int i = 0; i < petIndex; i++)
    {
        cout << petnameA[i] << " (Age: " << petageA[i] << ", Breed: " << breedA[i] << ", Owner: " << ownernameA[i] << ", Disease: " << diseaseA[i] << ")" << endl;
    }
    pauseScreen();
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

        if (opt == 1) addStaff();
        else if (opt == 2) viewAllStaff();
        else if (opt == 3) deleteStaff();
        else if (opt == 4) break;
        else
        {
            cout << "Invalid option." << endl;
            pauseScreen();
        }
    }
}

void addStaff()
{
    system("cls");
    if (staffIndex >= TOTAL_PETS)
    {
        cout << "Staff limit is full." << endl;
        pauseScreen();
        return;
    }

    cin.ignore();
    cout << "Enter staff name: ";
    getline(cin, SnameA[staffIndex]);
    cout << "Enter staff role: ";
    getline(cin, SroleA[staffIndex]);
    cout << "Enter staff username: ";
    getline(cin, SusernameA[staffIndex]);
    cout << "Enter staff password: ";
    getline(cin, SpasswordA[staffIndex]);

    staffIndex++;
    cout << "Staff added successfully." << endl;
    pauseScreen();
}

void viewAllStaff()
{
    system("cls");
    if (staffIndex == 0)
    {
        cout << "No staff records found." << endl;
    }

    for (int i = 0; i < staffIndex; i++)
    {
        cout << "Name     : " << SnameA[i] << endl;
        cout << "Role     : " << SroleA[i] << endl;
        cout << "Username : " << SusernameA[i] << endl;
        cout << "----------------------------------------" << endl;
    }
    pauseScreen();
}

void deleteStaff()
{
    system("cls");
    string name;
    cin.ignore();
    cout << "Enter staff name to delete: ";
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < staffIndex; i++)
    {
        if (SnameA[i] == name)
        {
            found = true;
            for (int j = i; j < staffIndex - 1; j++)
            {
                SnameA[j] = SnameA[j + 1];
                SroleA[j] = SroleA[j + 1];
                SusernameA[j] = SusernameA[j + 1];
                SpasswordA[j] = SpasswordA[j + 1];
            }
            staffIndex--;
            cout << "Staff deleted successfully." << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Staff with name " << name << " not found." << endl;
    }
    pauseScreen();
}

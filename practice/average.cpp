#include <iostream>
using namespace std;
int main (){

int days;
cout<<" enter working days per month :";
cin>>days;
float dollars;
cout<<" enter dollars earned per day :";
cin>>dollars;
float exchangerate;
cout<<" enter exchange rate from USD to PKR :";
cin>>exchangerate;
float monthlysalary;
monthlysalary = days*dollars;
float yearlysalary;
yearlysalary = monthlysalary*12;
float salaryafterbonus;
salaryafterbonus = yearlysalary + (2.5 * monthlysalary);
float salaryaftertax;
salaryaftertax = salaryafterbonus - (0.25 * yearlysalary);
int salaryinrupee;
salaryinrupee =salaryaftertax * exchangerate;
int average;
average = salaryinrupee/365;
cout<<" Average salary in rupees per day is : "<< average;

}
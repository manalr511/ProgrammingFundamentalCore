#include <iostream>
using namespace std;
int main(){
int MB;
cout<<" Enter the size in megabytes(MB) :";
cin>>MB;
float bits;
bits = MB*1024*1024*8;
cout<<MB<<" is equivalent to " <<bits<<"bits";
 
}
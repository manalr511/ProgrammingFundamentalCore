#include <iostream>
using namespace std;
int main(){
    int num,number,p1,p2,p3,p4,p5;
    number=0;
    cout<<"enter number count:";
    cin>>num;
    p1=0;
    p2=0;
    p3=0;
    p4=0;
    p5=0;
    for (int i=1;i<=num;i++){
    cout<<"enter number:";
    cin>>number;
      if (number<200){
        p1=p1+1;
      }
      else if (number>=200 && number <=300){
        p2=p2+1;
      }
      else if (number>=400 && number<=599){
        p3=p3+1;
      }
      else if (number>=600 && number <=799){
        p4=p4+1;
      }
      else {
        p5=p5+1;
      }
    }
    cout<<((p1*100.0)/num)<<"%" <<endl;
    cout<<((p2*100.0)/num)<<"%" <<endl;
    cout<<((p3*100.0)/num)<<"%" <<endl;
    cout<<((p4*100.0)/num)<<"%" <<endl;
    cout<<((p5*100.0)/num)<<"%" <<endl;
    
}
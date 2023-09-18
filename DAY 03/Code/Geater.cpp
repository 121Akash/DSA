#include<iostream>
using namespace std;
int main(){

       int a , b;
       cout<<"enter the value of a: ";
       cin>>a;

       cout<<"enter the value of b: ";
       cin>>b;


       if(a>b){
              cout<<" a is greater than b :" <<a << endl;

       }
       else{
              if(b>a){
              cout<<"b is grater than a: "<<b<<endl;
              }
              else{
                     cout<<" a is equal to b : "<<a <<"="<<b<<endl;
              }

       }


}
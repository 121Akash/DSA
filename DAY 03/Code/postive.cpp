#include<iostream>
using namespace std;
int main(){
       
       int a ;
       cout<<"enter the value of a : ";
       cin>>a;

       if(a>0){
              cout<<"a is postive : "<<a<<endl;
       }
       else{
              if(a<0){
                     cout<<"a is less than zero : "<<a<<endl;

              }
              else{
                     cout<<" a is equal to zero"<<endl;

              }
       }
}
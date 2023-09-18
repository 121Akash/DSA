/*

     OUTPUT

1  2  3 
4  5  6
7  8  9




*/



#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"enter the value of n : ";
       cin>>n;
       int count =1;

       int row =1;
       while(row<=n){
              int col = 1;
              while(col<=n){
                     cout<<" " <<count<< " ";
                     col=col+1;
                     count= count+1;
              }
              row=row+1;
              cout<<endl;
       }



}
 /*

     OUTPUT
A  B  C
A  B  C
A  B  C

   
*/


#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"enter the value of n : ";
       cin>>n;

       int row =1  ;
       char start= 'A';
       while(row<=n){
              int col = 1;
              while(col<=n){
                     char ch = start +col-1;
                     cout<<" " <<ch<< " ";
                     col = col+1;
              }
              row=row+1;
              cout<<endl;
       }



}
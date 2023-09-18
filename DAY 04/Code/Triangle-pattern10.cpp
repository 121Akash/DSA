 /*

     OUTPUT
D
C  D
B  C  D
A  B  C  D

   
*/


#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"enter the value of n : ";
       cin>>n;

       int row =1  ;
       // char start= 'A' +n -row;
       while(row<=n){
              int col = 1;
               char start= 'A' +n -row;
              while(col<=row){
                    
                    
                     cout<<" " <<start<< " ";
                 
                     col = col+1;
                     start=start+1;
                     
              }
              row=row+1;
             
              cout<<endl;
       }
}



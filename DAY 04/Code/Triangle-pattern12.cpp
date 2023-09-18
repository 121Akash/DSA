 /*

     OUTPUT
*  *  *  *
*  *  *
*  *
*

   
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
              int col = n;
             
              while(col>=row){
                    
                    cout<<"*";
                    col--;

                    
                     
              }
              row=row+1;
             
              cout<<endl;
       }
}
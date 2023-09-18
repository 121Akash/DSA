/*

     OUTPUT
1
2  1
3  2  1
4  3  2  1
   
*/



#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"enter the value of n : ";
       cin>>n;

       int row =1;
       while(row<=n){
              int col = 1;
              while(col<=row){
                     cout<<" " <<row-col+1<< " ";
                     col = col+1;
              }
              row=row+1;
              cout<<endl;
       }



}
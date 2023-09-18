/*

     OUTPUT

3  2  1
3  2  1
3  2  1




*/



#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"enter the value of n : ";
       cin>>n;

       int row =1;
       while(row<=n){
              int col = 3;
              while(col>=1){
                     cout<<" " <<col<< " ";
                     col=col-1;
              }
              row=row+1;
              cout<<endl;
       }



}
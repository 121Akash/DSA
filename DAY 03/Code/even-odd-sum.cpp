#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"enter the value of n : ";
       cin>>n;
       int i=1;
       int sum_even=0;
       int sum_odd=0;

       while(i<=n){
              if(i%2==0){
                     sum_even = sum_even + i;
                     
              }
              else{
                     sum_odd =sum_odd+i;
              }
              i=i+1;
       }

       cout<<"sum of even number from 1 to n : " <<sum_even<<endl;

       cout<<"sum of odd number from 1 to n : " <<sum_odd<<endl;




}

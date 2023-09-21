#include<iostream>
using namespace std;
int main(){
       int n ;
       int sum =0;
       int arr[100];
       cout<<"enter the size of array : ";
       cin>>n;

       cout<<"the array is : "<<endl;


       for(int i =0 ; i< n ; i++){
              cin>>arr[i];

       }

          for(int i =0 ; i< n ; i++){
             sum = sum + arr[i];


       }
       cout<<"The sum of array is : "<<sum <<endl;

}
#include<iostream>
using namespace std;
int main(){


//declare

int number[15];

cout<<"valur at 0 index : "<<number[0];


cout<<endl<<"every things is fine"<<endl<<endl;


//initilization the array

int second[3]={5,3,2};


cout<<"value of second index is : "<<second[2]<<endl;


//print array

int arr[10];

int n;
cout<<"enter the length of array : ";


cin>>n;

for(int i =0 ; i<n ;i++){
       cin>>arr[i];

}

cout<<"the array is : "<<endl;

for(int i =0 ; i<n ;i++){
     cout <<arr[i]<<" ";

}






       return 0;
}
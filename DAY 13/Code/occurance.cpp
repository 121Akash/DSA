#include<iostream>
using namespace std;
int firstOccurance(int arr[] ,int n , int key){
       int start =0;
       int end = n-1;
       int mid = start + (end - start)/2;
       int ans = -1;

       while(start <= end){
              if(arr[mid] == key){
                     ans = mid;
                     end = mid -1;


              }
              else if(key > arr[mid]){
                     start= mid +1;


              }
              else if(key < arr[mid]){
                     end = mid-1;

              }
               mid = start + (end - start)/2;
       }
       return ans;
}

int lastOccurance(int arr[] ,int n , int key){
       int start =0;
       int end = n-1;
       int mid = start + (end - start)/2;
       int ans = -1;

       while(start <= end){
              if(arr[mid] == key){
                     ans = mid;
                     start = mid + 1;


              }
              else if(key > arr[mid]){
                     start= mid +1;


              }
              else if(key < arr[mid]){
                     end = mid-1;

              }
               mid = start + (end - start)/2;
       }
       return ans;
}



int main(){
       int arr[100];
       int n;
       int key;
       cout<<"Enter the length of array : ";
       cin>> n;

       cout<<"Enter the element of array : "<<endl;

       for(int i =0 ;i <n ; i++){
              cin>>arr[i];
       }
       cout<<"enter the value of key :";
       cin>>key;
       cout<<" first occurance of "<< key << " is : "<<firstOccurance(arr , n , key )<<endl;

         cout<<" last occurance of "<< key << " is : "<<lastOccurance(arr , n , key )<<endl;

         





return 0;

}
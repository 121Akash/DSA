#include<iostream>
using namespace std;
int binaryIndex(int arr[] , int n ,int key){
       int start =0;
       int end  = n-1;
       int mid =(start +end)/2;

       while(start<=end){
              if(arr[mid]==key){
                     return mid;

              }

              //go to right part of arry if key is greater 
              if(key>arr[mid]){
                     start= mid +1;

              }
              else{
                     end= mid -1;
              }
              mid = (start+end) /2;
       }
       return -1;

}


int main(){
       int arr[100];
       int n ;
       cout<<"enter the size of array : ";
       cin>>n;

       cout<<"enter the element of array : " <<endl;
       for(int i = 0; i<n ;i++){
              cin>>arr[i];

       }
       int index = binaryIndex(arr , n ,13);

       cout<<"index of 13 : "<<index<<endl;



        


        return 0;
}
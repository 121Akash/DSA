#include<iostream>
using namespace std;
void update(int arr[] , int n){

       cout<<"inside the function "<<endl;
       //printing the array 

       for(int i=0 ; i<n ; i++){
              cout<<arr[i] <<" ";
       }
       cout<<endl;



       cout<<"going back to main ";


}



int main (){
       int arr[3] ={1,3,6};

       update(arr, 3);
        

        for(int i =0 ; i< 3 ;i++){
              cout<<arr[i]<<" ";
        }




       return 0;

}
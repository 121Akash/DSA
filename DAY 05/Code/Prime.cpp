#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"enter the value of n : ";

      cin>>n;
      bool isPrime =1;

      for(int i=2 ; i<n ; i++){
       if(n%i==0){
              // cout<<"not prime"<<endl;
              isPrime=0;
              break;

       }
    }


       if(isPrime==0){
              cout<<"it is not a prime no"<<endl;

       }
       else{
               cout<<"it is a prime no"<<endl;
       }

}



      

 





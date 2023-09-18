#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"enter the value of n : ";
      int a = 0;
      int b = 1;
      

      cin>>n;

      cout<<"fibonacci series from 1 to "<<n<<" : " <<endl;
      cout<<a <<" "<<b<<" ";


      for(int i=1 ; i<=(n-2) ;i++){
      int c = a +b ;
      cout<<c <<" ";
     a=b;
     b=c;
      
      }

    

 




}
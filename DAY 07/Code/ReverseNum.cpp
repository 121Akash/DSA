    /* OUTPUT 


    I/P =123 
    O/P =321

    IF NUMBER IS OUTSIDE FROM THE RANGE OF INT PRINT 0

    */
   




#include<iostream>
using namespace std;
int main(){

       int num;
       cout<<"enter the value of num : ";
       cin>>num;

       int ans =0;


       while(num !=0){
              int diget = num %10;
              if((ans> INT_MAX/10)  || (ans<INT_MIN/10)){
                     cout<<" 0 " <<endl;

              }
              ans  = (ans *10) +diget;
              num= num /10;

       }

       cout<<"reverse number is : " <<ans <<endl;


}
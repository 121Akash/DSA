/*

   I/p = 5 ----> CONVERT INTO BINARY  IN 32 BIT -->  0000000_ _ _ _0101
   TAKE ONES COMPLIMENT OF BINARY NUMBER 
   AND AFTER CONVERT INTO THE "DECIMAL NUMBER" 
   O/P = DECIMAL NUMBER



*/


#include<iostream>
using namespace std;
 int main (){

       int n ;
       cout <<" enter the number :  ";
       cin>>n;

       int m =n;
       int mask = 0;

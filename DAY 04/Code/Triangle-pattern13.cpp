 /*

     OUTPUT


         1
      1  2  1
   1  2  3  2  1
1  2  3  4  3  2  1

   
*/


#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"enter the value of n : ";
       cin>>n;

       int row =1;

       //space
       while(row<=n){
              int space= n-row;
              while(space){
                     cout<<" ";
                     space--;

              }


              //print 1st triangle

              int col =1;
              while(col<=row){
                     cout<<col;
                     col++;
              }

              //print 2nd triangle

              int start = row-1;
              while(start){
                     cout<<start;
                     start--;
              }

              cout<<endl;
              row++;
       }
  
  
}
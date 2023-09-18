 /*

     OUTPUT
1  2  3  4  5  5  4  3  2  1
1  2  3  4  *  *  4  3  2  1
1  2  3  *  *  *  *  3  2  1
1  2  *  *  *  *  *  *  2  1 
1  *  *  *  *  *  *  *  *  1

   
*/


#include<iostream>
using namespace std;
int main(){
       int n;
       cout<<"enter the value of n : ";
       cin>>n;

       int row =1;

    while(row<=n){
       //1st triangle
       int col=1;

       while(col<=row){
              cout<<col;
              col++;
       }
       cout<<endl;
       row++;


    }
  
  
}
#include<iostream>
using namespace std;
int main(){
       char ch;
       cout<<"enter the character : ";
       cin>>ch;

       if(ch>='a' && ch<='z'){
              cout<<"this is lower case"<<endl;
       }
       else if(ch>='A' && ch<='Z'){
                cout<<"this is upper case"<<endl;
       }
       else{
                cout<<"this is numeric"<<endl;
       }


}

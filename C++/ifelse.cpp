#include<iostream>
using namespace std;
int main(){
    char ch;
 cout<<"ENter the character\n";
  cin>>ch;
  if(ch>=97 && ch<123){
       cout<<"The character in the lower case\n";
   }
   else if(ch>=67 && ch<93){
       cout<<"The character in the upper case\n";
   }
  else if(ch>=0 && ch<9){
   cout<<"The character in muneric\n";
  }
  else{cout<<"Please enter valid key\n";}
}
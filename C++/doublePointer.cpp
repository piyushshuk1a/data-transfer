#include<iostream>
using namespace std;
void update(int **p){
     
      p = p+1;       // Kuch change hoga?? -> NO!!.

     *p = *p + 1;   //Kuch change hoga?? -> YES!!!


     **p = **p + 1;  //Kuch change hoga?? -> YES!!
   }
int main(){
   int i = 5;
   int*p = &i;
   int**p2 = &p;
  /*
   cout<< "Printing P :"<< p <<endl;
   cout<< *p2 <<endl<<endl;
   cout<< i <<endl;
   cout<< *p <<endl;
   cout<< **p2 <<endl<<endl;



   cout<< &i <<endl;
   cout<< p <<endl;
   cout<< *p2 <<endl<<endl;

   cout<< &p <<endl;
   cout<< p2 <<endl;
*/
   cout<<endl;
   cout<<"Before :"<<endl<< i <<endl;
   cout<<"Before :"<< p <<endl;
   cout<<"Before :"<< p2 <<endl<<endl;


   update(p2);

   cout<<"After :"<<endl<< i <<endl;
   cout<<"After :"<< p <<endl;
   cout<<"After :"<< p2 <<endl<<endl;

 


}
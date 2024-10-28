#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int count=0;
    int b=0;
    while(t--){
        char s[5];
        scanf("%s", s);
        for(int i = 0; i<5; i++){
            if(s[0]=='A' || s[1]=='A' || s[2]=='A'|| s[3]=='A' || s[4]=='A'){
               count++; 
            }
            else{
                b++;
            }
          
        }
    }
    if(count>b){
              printf("A\n");
          }  
          else{
              printf("B\n");
          }
}
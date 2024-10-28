#include<stdio.h>
#include<string.h>
void main()
{
    int value;
char S1[30],S2[30];
printf("Enter the string 1 :\n");
scanf("%s", S1);
printf("Enter the string 2 :\n");
scanf("%s", S2);


 value = strcmp(S1,S2);
 if (value == 0)
 {
    printf("same\n");
 }
 else{
    printf("Not same\n");
 }
printf("The value is :%d",value);




}
#include<stdio.h>
#include<string.h>
void main()
{
char S1[30];
int i;
printf("Enter the string :\n");
gets(S1);
for ( i = 0; S1[i] != '\0'; i++)
{
    if (S1[i] >= 'A' && S1[i] <= 'Z')
    {
        S1[i] = S1[i]+32;
    }
    
}
printf("The required string is :%s\n", S1);
printf("The previous string is : %c", S1);



}

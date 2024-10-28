#include<stdio.h>
#include<string.h>
void main()
{
char S1[30],c;
int i, l;
printf("Enter the string :\n");
gets(S1);
l = strlen(S1);
for ( i = 0; i < l/2; i++)
{
    c = S1[i];
    S1[i] = S1[l-1-i];
    S1[l-1-i] = c;

}
printf("%s", S1);





}
#include<stdio.h>
void evenodd()
{
int a;
printf("Enter the number :\n");
scanf("%d", &a);
if (a%2==0)
{
    printf("Number is even\n");
}
else{
   printf("Number is odd\n");
}

}
void main(){
    evenodd();
    printf("HI\n");
    evenodd();
    printf("hello\n");
    evenodd();
}


#include<stdio.h>
int main()
{
    //M=maths, S=science, E=english, C=computer, H=hindi
    int M,S,E,C,H,sum;
    float percentage;
    printf("Enter the marks of maths : ");
    scanf("%d", &M);
    printf("Enter the marks of science : ");
    scanf("%d", &S);
    printf("Enter the marks of english : ");
    scanf("%d", &E);
    printf("Enter the marks of computer : ");
    scanf("%d", &C);
    printf("Enter the marks of hindi : ");
    scanf("%d", &H);
    
    sum = M+S+E+C+H;
    
    percentage = sum/5;

    printf("Your percentage is : %.2f\n", percentage);

    if (percentage >= 90)
    {
        printf("You get grade A\n\n");
    }
    else if (percentage >= 80 && percentage <= 90) 
    {
        printf("You get  grade B\n");
    }
     else if (percentage >= 60 && percentage <= 80)
    {
         printf("You get grade C\n");

    }
   
   else{

        printf("You get grade D\n");

       }
    

   return 0;
}
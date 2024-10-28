#include<stdio.h>
void sum()
{
    int a ,b, sum =0;
printf("Enter the two numbers :\n");
scanf("%d %d", &a, &b);
sum = a+b;
printf("Sum is :%d\n", sum);
}
void main()
{
    sum();
    printf("Hello\n");
    sum();
    printf("Hi!\n");
    sum();
} 
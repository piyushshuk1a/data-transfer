// program for number is even or odd?
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    if (a % 2 != 0)

    {
        printf("a is odd\n");
    }
    else
    {
        printf("a is even\n");
    }
    if (b % 2 != 0)
    {
        printf("b is odd\n");
    }
    else
    {
        printf("b is even\n");
    }
return 0;
}
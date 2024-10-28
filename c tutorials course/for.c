#include <stdio.h>
int main()
{
    int i, num, a;
    printf("Enter the number whose table you want to priint :\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        a = num * i;

        printf("The Table is :%d\n", a);

        
    }
    return 0;
}
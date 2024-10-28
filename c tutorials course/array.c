#include<stdio.h>
void main()
{
    int a[10], even = 0, odd = 0, i;
    printf("Enter the elememnts : ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("\nThe even numbers are : %d", even);
    printf("\nThe odd numbers are : %d", odd);

}
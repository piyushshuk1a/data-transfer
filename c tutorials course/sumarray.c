#include<stdio.h>
void main()
{
    int a[5], b[5], c[5], i, j;
 
    printf("Entet the first array element :");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the second array element :");
    for ( i = 0; i< 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        c[i] = a[i]+b[i];
    printf("\nSum is : %d\n", c[i]);
    }
    
    // c[i] = a[i]+b[i];
    // printf("Sum is : %d\n", c[i]);
    
    

}
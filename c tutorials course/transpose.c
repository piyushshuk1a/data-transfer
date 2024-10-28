#include<stdio.h>
#define N 50
void main()
{
    int a[N][N], i, j, m,n;
    printf("Enter the order of matrix :\n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}
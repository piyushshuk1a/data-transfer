#include <stdio.h>
#define N 50
void main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, m, n, p, q, sum;
    printf("Enter the order of first matrix :\n");
    scanf("%d %d", &m, &n);
    printf("Enter the first matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the order of second matrix :\n");
    scanf("%d %d", &p, &q);
    printf("Enter the second matrix :\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe first matrix is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe second matrix is :\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (p != n)
    {
        printf("Matrix can not multiply\n");
    }

    else+
    
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }

        printf("\nThe multiplication is :\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}
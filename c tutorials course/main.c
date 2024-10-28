#include <stdio.h>
#include <stdlib.h>
void main()
{
    int m, n, p, sum = 0;
    int a[100][100], b[100][100], result[100][100];
    printf("Enter the order of matrix :");
    scanf("%d %d", &m, &n);
    printf("Enter the first matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("Enter the %d %d element of first matrix\n, i, j);
            scanf("%d", &a[i][j]);
            // printf("\t");
        }
        // printf("\n");

        // printf("\n");
    }
    printf("Enter the second matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("Enter the %d %d element of first matrix\n", i, j);
            scanf("%d", &b[i][j]);
            // printf("\t");
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Calculate the result
            for (int k = 0; k < m; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // Print the resultant matrix
    printf("The result is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Print the result

            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
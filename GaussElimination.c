#include <stdio.h>

int main()
{
    int n, i, j, k;
    float a[10][10], b[10], x[10], sum, z;

    printf("Enter the no. of Equations: ");
    scanf("%d", &n);

    printf("\nEnter the Co-efficient Matrix: \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    printf("\nEnter the Right Hand Side Vector: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &b[i]);
    }

    for (k = 1; k < n; k++)
    {
        for (i = k + 1; i <= n; i++)
        {
            z = a[i][k] / a[k][k];
            for (j = 1; j <= n; j++)
            {
                a[i][j] = a[i][j] - z * a[k][j];
            }
            b[i] = b[i] - z * b[k];
        }
    }

    x[n] = b[n] / a[n][n];

    for (k = n - 1; k >= 1; k--)
    {
        sum = b[k];
        for (j = n; j >= k + 1; j--)
        {
            sum = sum - a[k][j] * x[j];
        }
        x[k] = sum / a[k][k];
    }

    printf("\nResult = \n");
    for (i = 1; i <= n; i++)
    {
        printf("%.0f\n", x[i]);
    }

    return 0;
}
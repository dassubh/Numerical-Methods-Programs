#include <stdio.h>

int main()
{
    int n, i, j;
    float x[10], y[10][10], z, u, sum, product, h;

    printf("Enter the no. of terms: ");
    scanf("%d", &n);

    printf("\nEnter %d values of x: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }

    printf("\nEnter %d values of y: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &y[i][0]);
    }

    h = x[1] - x[0];

    printf("\nEnter the interpolation point: ");
    scanf("%f", &z);

    u = (z - x[n - 1]) / h;

    sum = y[n - 1][0];

    for (j = 1; j < n; j++)
    {
        for (i = 1; i < n; i++)
        {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }

    printf("\nThe Backward Difference Table: \n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j <= i; j++)
        {
            printf("%.2f\t", y[i][j]);
        }
    }

    for (i = 1; i < n; i++)
    {
        product = y[n - 1][i];
        for (j = 1; j <= i; j++)
        {
            product = product * (u + j - 1) / j;
        }
        sum = sum + product;
    }

    printf("\n\nResult at point %.1f = %.3f", z, sum);

    return 0;
}
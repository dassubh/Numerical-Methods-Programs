#include <stdio.h>

int main()
{
    int n, h, i, j;
    float x[10], y[10][10], z, u, sum, product;

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

    u = (z - x[0]) / h;

    sum = y[0][0];

    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }

    printf("\nThe Forward Difference Table: \n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n - i; j++)
        {
            printf("%.2f\t", y[i][j]);
        }
    }

    for (i = 1; i < n; i++)
    {
        product = y[0][i];
        for (j = 1; j <= i; j++)
        {
            product = product * (u - j + 1) / j;
        }
        sum += product;
    }

    printf("\n\nResult at point %.1f = %.3f", z, sum);

    return 0;
}
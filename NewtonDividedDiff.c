#include <stdio.h>

int main()
{
    int n, k, i, j;
    float x[10], y[10][10], z, sum, product;

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

    printf("\nEnter the interpolation point: ");
    scanf("%f", &z);


    for (j = 1; j < n; j++)
    {
        k = j;
        for (i = 0; i < n - j; i++)
        {
            y[i][j] = (y[i + 1][j - 1] - y[i][j - 1]) / (x[k] - x[i]);
            k++;
        }
    }

    printf("\nThe Divided Difference Table: \n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n - i; j++)
        {
            printf("%.2f\t", y[i][j]);
        }
    }

    sum = y[0][0];

    for (i = 1; i < n; i++)
    {
        product = 1.0;
        for (j = 0; j < i; j++)
        {
            product = product * (z - x[j]);
        }
        sum = sum + product * y[0][i];
    }

    printf("\n\nResult at point %.1f = %.3f", z, sum);

    return 0;
}
#include <stdio.h>

int main()
{
    int n, i, j;
    float x[10], y[10], z, sum, product;

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
        scanf("%f", &y[i]);
    }

    printf("\nEnter the interpolation point: ");
    scanf("%f", &z);

    sum = 0.0;

    for (i = 0; i < n; i++)
    {
        product = 1.0;
        for (j = 0; j < n; j++)
        {
            if (j != i)
                product = product * ((z - x[j]) / (x[i] - x[j]));
        }
        sum = sum + product * y[i];
    }

    printf("\n\nResult at point %.2f = %.3f", z, sum);

    return 0;
}
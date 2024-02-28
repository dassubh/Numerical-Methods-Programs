#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, j, t;
    float a[10][10], b[10], x[10], x0[10], e, sum;

    printf("\nEnter the no of Equation: ");
    scanf("%d", &n);

    printf("\nEnter the Coefficient Matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    printf("\nEnter the Right Hand Side Vector: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &b[i]);
    }

    printf("\nEnter the Desired accuracy: ");
    scanf("%f", &e);

    if ((a[0][0] >= a[0][1] + a[0][2]) && (a[1][1] >= a[1][0] + a[1][2]) && (a[2][2] >= a[2][0] + a[2][1]))
    {
        t = 0;
        while (t == 0)
        {
            for (i = 0; i < n; i++)
            {
                x[i] = x0[i];
                sum = b[i];
                for (j = 0; j < n; j++)
                {
                    if (j != i)
                        sum = sum - a[i][j] * x0[j];
                }
                x0[i] = sum / a[i][i];
            }

            for (i = 0; i < n; i++)
            {
                if (fabs(x0[i] - x[i]) > e)
                {
                    t = 0;
                    break;
                }
                else
                    t = 1;
            }
        }

        printf("\n\nThe Solution vector: \n");
        for (i = 0; i < n; i++)
        {
            printf("%.f\n", x[i]);
        }
    }
    else
    {
        printf("\nEntered Matrix is not Diagonally Dominant");
        exit(0);
    }

    return 0;
}
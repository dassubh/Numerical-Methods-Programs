#include <stdio.h>
#include <math.h>

float f(float x)
{
    float y;
    y = x * x * x - 6 * x - 13;
    return y;
}

float df(float x)
{
    float y;
    y = 3 * x * x - 6;
    return y;
}

int main()
{
    float a, b, e, c;

    printf("Enter desired accuracy : ");
    scanf("%f", &e);

    printf("\nEnter the initial value : ");
    scanf("%f", &a);

    printf("\nIteration\tValue of X\n");

    int it = 1;

    do
    {
        b = a;
        a = a - (f(a) / df(a));
        printf("%d\t\t%f\n", it, a);
        it++;
    } while (fabs(b - a) > e);

    printf("\nFinal Root is %.2f", a);
    return 0;
}
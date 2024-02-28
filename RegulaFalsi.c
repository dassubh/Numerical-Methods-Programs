#include <stdio.h>
#include <math.h>

float f(float x)
{
    float y;
    y = x * x * x - 4 * x - 9;
    return y;
}
int main()
{
    float a, b, e, c;

    printf("Enter desired accuracy : ");
    scanf("%f", &e);

    do
    {
        printf("\nEnter the interval [a, b] : ");
        scanf("%f%f", &a, &b);
    } while ((f(a) * f(b)) > 0);

    printf("\nIteration\tValue of X\n");

    int it = 1;
    do
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if ((f(a) * f(c)) < 0)
            b = c;
        else
            a = c;
        printf("%d\t\t%f\n", it, c);
        it++;
    } while (fabs(f(c)) > e);

    printf("\nFinal Root is %.2f", c);
    return 0;
}
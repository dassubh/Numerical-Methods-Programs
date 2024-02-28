#include <stdio.h>

float f(float x)
{
    return (x * x + 2) / (x * x + 1);
}
int main()
{
    float a, b, n, c, h, sum = 0.0;

    printf("Enter Lower and Upper Limit: ");
    scanf("%f%f", &a, &b);

    printf("\nEnter the No. of interval: ");
    scanf("%f", &n);

    h = (b - a) / n;
    c = a;

    do
    {
        sum = sum + ((3 * h) / 10) * (f(a) + 5 * f(a + h) + f(a + 2 * h) + 6 * f(a + 3 * h) + f(a + 4 * h) + 5 * f(a + 5 * h) + f(a + 6 * h));
        a = a + 6 * h;
    } while (a < b);

    printf("\nx\t\tf(x)\n\n");
    while (c <= b)
    {
        printf("%f\t%f\n", c, f(c));
        c = c + h;
    }

    printf("\nResult = %f", sum);

    return 0;
}

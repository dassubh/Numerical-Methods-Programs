#include <stdio.h>

float f(float x)
{
    return (1 / (1 + x * x));
}
int main()
{
    float a, b, n, h, sum;
    int i;

    printf("Enter Lower and Upper Limit: ");
    scanf("%f%f", &a, &b);

    printf("\nEnter the No. of interval: ");
    scanf("%f", &n);

    h = (b - a) / n;

    sum = f(a) + f(b);

    printf("\nx\t\tf(x)\n\n");
    printf("%f\t%f\n", a, f(a));
    for (i = 1; i < n; i++)
    {
        a = a + h;
        printf("%f\t%f\n", a, f(a));
        if (i % 3 == 0)
            sum = sum + 2 * f(a);
        else
            sum = sum + 3 * f(a);
    }

    printf("%f\t%f\n", b, f(b));
    printf("\nResult = %f", sum * ((3 * h) / 8));

    return 0;
}
#include <stdio.h>

float f(float x)
{
    return (1 / (1 + x * x));
}
int main()
{
    float a, b, n;
    float h, sum = 0.0;

    printf("Enter Lower and Upper Limit: ");
    scanf("%f%f", &a, &b);

    printf("\nEnter the No. of interval: ");
    scanf("%f", &n);

    h = (b - a) / n;

    printf("\nx\t\tf(x)\n\n");
    do
    {
        sum = sum + (h / 2) * (f(a) + f(a + h));
        printf("%f\t%f\n", a, f(a));
        a = a + h;
    } while (a < b);

    printf("%f\t%f\n", b, f(b));
    printf("\nResult = %f", sum);

    return 0;
}

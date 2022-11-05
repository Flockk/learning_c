#include <stdio.h>
#include <math.h>

int main(void)
{

    int a, b, c;
    double d, x0, x1, x2;
    printf("Enter the three coefficients of the quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;
    x0 = (-b) / (2 * a);
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    if (d > 0)
    {
        printf("Solution of the equation: x1 = %.4lf, x2 = %.4lf", x1, x2);
    }
    else if (d = 0)
    {
        printf("Solution of the equation: x1 = %.4lf", x0);
    }
    else
    {
        printf("NO");
    }
    return 0;
}
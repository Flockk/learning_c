#include <stdio.h>
#include <math.h>

int main(void)
{

    int a, b, c;
    double d, x0, x1, x2;
    scanf ("%d %d %d", &a, &b, &c);
    
    d = b * b - 4 * a * c; 
    x0 = (-b) / (2 * a);
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    
    if(d > 0)
    {
        printf("%.4lf %.4lf", x2, x1);
    }
    else if(d = 0)
    {
        printf("%.4lf", x0);
    }
    else
    {
        printf("NO");
    }    
    return 0;
}
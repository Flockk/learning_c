#include <stdio.h>

int main(void)
{

    int a, b, c, d;   
    scanf ("%d %d", &a, &b);
    
    c = a % b;
    d = b % a;
    
    if(c < d)
    {
        printf("%d", c);
    }
    else
    {
        printf("%d", d);
    }    
    return 0;

}
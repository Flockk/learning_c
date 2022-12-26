#include <stdio.h>

int main(void)
{

    int year;   
    scanf ("%d", &year);
    
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        write(1,"YES", 3);
    }
    else
    {
        write(1,"NO", 2);
    }    
    return 0;

}
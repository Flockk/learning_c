#include<stdio.h>

int main()
{
    float mas[10];
    int i = 0;
    float max, min, avg;

    if (mas[i] <= 1 && mas[i] >= 100000)
    {
        return 0;
    }
    else
    {
        printf("Enter ten positive integers: ");
        while (i < 10)
        {
            scanf("%f", &mas[i]);
            i++;
        }

        avg = mas[0];
        max = mas[0];
        min = mas[0];

        i = 1;
        while (i < 10)
        {
            if (mas[i] > max)
            {
                max = mas[i];
            }
            if (mas[i] < min)
            {
                min = mas[i];
            }

            avg = max + min;
            i++;
        }
        avg = avg / 2;
        printf("Arithmetic mean of min and max: %.4f", avg);
    }
    return 0;
}

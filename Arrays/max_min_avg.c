#include<stdio.h>
#define N 30

int main()
{
    float mas[N];
    int i;
    float max, min, avg;
    
    if(mas[i] <= 1 && mas[i] >= 100000)
    {
        return 0;
    }
    else
    {
        i = 0;
        while(i < N)
        {
            scanf("%f", &mas[i]);
            i++;
        }
        
        avg = mas[0];
        max = mas[0];
        min = mas[0];
        
        i = 1;
        while(i < N)
        {
            if(mas[i] > max)
            {
                max = mas[i];
            }
            if(mas[i] < min)
            {
                min = mas[i];
            }
            
            avg = avg + mas[i];
            i++;
        }
        avg = avg / N;
        printf("%.4f %.4f %.4f", max, min, avg);
    }
    return 0;
}
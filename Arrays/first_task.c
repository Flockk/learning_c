#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    // declare local variables   
    int arr[20], i, j, k, size;

    scanf(" %d", &size);

	if (size > 1 && size < 1000)
	{
        for (i = 0; i < size; i++)
        {
            scanf(" %d", &arr[i]);
        }

        for (i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    for (k = j; k < size - 1; k++)
                    {
                        arr[k] = arr[k + 1];
                    }
                    size--;

                    j--;
                }
            }
        }

        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }
    else
    {
        printf("Restart the program, enter a number in the desired range!");
        exit(EXIT_SUCCESS);
    }
	return 0;
}
#include "sort.h"

void shell_sort(int *array, size_t size)
{
    
    size_t gap = 1;
    size_t i, j;

    while (gap <= size / 3)
    {
        gap = gap * 3 + 1;
    }

    while (gap > 0)
    {
        for (i = 0; i < size; i++)
        {
            if (i > 0)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");

        for (i = gap; i < size; i++)
        {
            int temp = array[i];
            j = i;

            while (j >= gap && array[j - gap] > temp)
            {
                array[j] = array[j - gap];
                j -= gap;
            }

            array[j] = temp;
        }

        gap = (gap - 1) / 3;
    }
}


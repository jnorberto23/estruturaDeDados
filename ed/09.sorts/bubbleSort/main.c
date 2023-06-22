#include <stdlib.h>
#include <stdio.h>

int BASE_ARRAY[] = {9, 8, 7, 2, 1, 4, 5};

#define LENGTH (sizeof(BASE_ARRAY) / sizeof(BASE_ARRAY[0]))

void bubbleSort(int *v, int len);

void PrintArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    printf("Original Array: ");
    PrintArray(BASE_ARRAY, LENGTH);

    bubbleSort(BASE_ARRAY, LENGTH);

    printf("Sorted Array: ");
    PrintArray(BASE_ARRAY, LENGTH);

    return 0;
}

void bubbleSort(int *v, int len)
{
    int i, j, aux;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}
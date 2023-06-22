#include <stdlib.h>
#include <stdio.h>

int BASE_ARRAY[] = {9, 8, 7, 2, 1, 4, 5};

#define LENGTH (sizeof(BASE_ARRAY) / sizeof(BASE_ARRAY[0]))

void selectionSort(int *v, int len);

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

    selectionSort(BASE_ARRAY, LENGTH);

    printf("Sorted Array: ");
    PrintArray(BASE_ARRAY, LENGTH);

    return 0;
}

void selectionSort(int v[], int len)
{
    int aux = 0;
    int end = len;

    for (int i = 0; i < end; i++)
    {
        for (int j = 0; j < end; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
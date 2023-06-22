#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int BASE_ARRAY[] = {9, 8, 7, 2, 1, 4, 5};

#define LENGTH (sizeof(BASE_ARRAY) / sizeof(BASE_ARRAY[0]))

void mergeSort(int v[], int begin, int end);
void merge(int v[], int begin, int middle, int end);

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
    int begin = 0;
    int end = LENGTH - 1;
    printf("Original Array: ");
    PrintArray(BASE_ARRAY, LENGTH);

    mergeSort(BASE_ARRAY, begin, end);

    printf("Sorted Array: ");
    PrintArray(BASE_ARRAY, LENGTH);

    return 0;
}

void mergeSort(int v[], int begin, int end)
{
    int middle;
    if (begin < end)
    {
        middle = floor((begin + end) / 2);
        mergeSort(v, begin, middle);
        mergeSort(v, middle + 1, end);
        merge(v, begin, middle, end);
    }
}

void merge(int v[], int begin, int middle, int end)
{
    int *temp, p1, p2, size, i, j, k;
    int end1, end2;

    size = end - begin + 1;
    p1 = begin;
    p2 = middle + 1;

    temp = (int *)malloc(size * sizeof(int));
    if (temp != NULL)
    {
        end1 = 0;
        end2 = 0;

        for (i = 0; i < size; i++)
        {
            if (!end1 && !end2)
            {
                if (v[p1] < v[p2])
                {
                    temp[i] = v[p1++];
                }
                else
                {
                    temp[i] = v[p2++];
                }
                if (p1 > middle)
                {
                    end1 = 1;
                }
                if (p2 > end)
                {
                    end2 = 1;
                }
            }
            else
            {
                if (!end1)
                {
                    temp[i] = v[p1++];
                }
                else
                {
                    temp[i] = v[p2++];
                }
            }
        }

        for (j = 0, k = begin; j < size; j++, k++)
        {
            v[k] = temp[j];
        }
    }
    free(temp);
}
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "sorts.h"

void PrintArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

double bubbleSort(int v[], int len)
{
    int i, aux, keep = 0;
    int end = len - 1;
    do
    {
        keep = 0;
        for (i = 0; i < end; i++)
        {

            if (v[i] > v[i + 1])
            {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                keep = 1;
            }
        }
        len--;
    } while (keep != 0);
}

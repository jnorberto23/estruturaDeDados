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
    int end = len;
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
double insertionSort(int v[], int len)
{
    int aux = 0;
    int end = len;

    for (int i = 0; i < end; i++)
    {
        aux = v[i];
        for (int j = i; (j > 0) && (v[j] < v[j - 1]); j--)
        {

            v[j] = v[j - 1];
            v[j - 1] = aux;
        }
    }

    return 0.0;
}
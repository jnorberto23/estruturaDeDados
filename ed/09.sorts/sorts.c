#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "sorts.h"

void PrintArray(const int* arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *arr[i]);
    }
    printf("\n");
}

int* bubbleSort(const int* v[], int len)
{
    int i, j, aux;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (*v[j] > *v[j + 1])
            {
                aux = *v[j];
                *v[j] = *v[j + 1];
                *v[j + 1] = aux;
            }
        }
    }
    return (int*)*v;
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

double selectionSort(int v[], int len)
{
    int aux = 0;
    int end = len;

    for (int i = 0; i < end; i++)
    {
        for (int j = 0; j < end; i++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    return 0.0;
}
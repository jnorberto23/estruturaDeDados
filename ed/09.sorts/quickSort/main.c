#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int BASE_ARRAY[] = {9, 8, 7, 2, 1, 4, 5};

#define LENGTH (sizeof(BASE_ARRAY) / sizeof(BASE_ARRAY[0]))

void quickSort(int v[], int begin, int end);
int partition(int v[], int begin, int end);

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

    quickSort(BASE_ARRAY, begin, end);

    printf("Sorted Array: ");
    PrintArray(BASE_ARRAY, LENGTH);

    return 0;
}

void quickSort(int v[], int begin, int end)
{
    int pivot;
    if (begin < end)
    {
        pivot = partition(v, begin, end);
        quickSort(v, begin, pivot -1);
        quickSort(v, pivot + 1, end);
    }
}

int partition(int v[], int begin, int end)
{
    int left, right, pivot, aux;

    left = begin;
    right = end;
    pivot = v[begin];

    while(left < right){
        while (left <= end && v[left] <= pivot)
        {
            left++;
        }
           while (right >= 0 && v[right] > pivot)
        {
            right--;
        }
        if(left < right){
            aux = v[left];
            v[left] = v[right];
            v[right] = aux;
        }
        
    } 
    v[begin] = v[right];
    v[right] = pivot;
    return right;
}
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int BASE_ARRAY[] = {9, 8, 7, 2, 1, 4, 5};

#define LENGTH (sizeof(BASE_ARRAY) / sizeof(BASE_ARRAY[0]))


void heapSort(int v[], int size);
int createHeap(int v[], int begin, int end);

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

    heapSort(BASE_ARRAY, LENGTH);

    printf("Sorted Array: ");
    PrintArray(BASE_ARRAY, LENGTH);

    return 0;
}

void heapSort(int v[], int size)
{
    int i, aux;
    for (i = (size - 1 / 2); i >= 0; i--)
    {
        createHeap(v, i, size - 1);
    }

    for (i = size - 1; i >= 1; i--)
    {
        aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        createHeap(v, 0, i - 1);
    }
}

int createHeap(int v[], int begin, int end)
{
    int aux = v[begin];
    int j = begin * 2 + 1;

    while(j<=end){
        if(j<end){
            if(v[j] < v[j+1]){
                j = j +1;
            }
        }
        if(aux < v[j]){
            v[begin] = v[j];
            begin = j;
            j = 2 * begin + 1;
        }else{
            j = end + 1;
        }
    }
    v[begin] = aux;
 
}
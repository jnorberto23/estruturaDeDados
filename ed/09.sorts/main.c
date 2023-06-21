#include <stdlib.h>
#include <stdio.h>
#include "sorts.h"
#include "sorts.c"

const int* BASE_ARRAY[] = {9, 8, 7, 2, 1, 4, 5};
#define LENGTH (sizeof(BASE_ARRAY) / sizeof(BASE_ARRAY[0]))

int main(void)
{
    printf("Base Array: ");
    PrintArray(BASE_ARRAY, LENGTH);

    bubbleSortMethod();

    return 0;
}

int bubbleSortMethod(void)
{
    int* newArray = bubbleSort(BASE_ARRAY, LENGTH);
    printf("Array after bubble sorting: ");
    PrintArray((const int**)newArray, LENGTH);

    return 0;
}

int insertionSortMethod()
{
    printf("Array after insertion sorting: ");
    // PrintArray(BASE_ARRAY, LENGTH);
}
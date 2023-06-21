#include <stdlib.h>
#include <stdio.h>
#include "sorts.h"
#include "sorts.c"

int main(void)
{
    int bubbleSortArray[] = {1, 5, 7, 9, 2, 3, 0};
    int length = sizeof(bubbleSortArray) / sizeof(bubbleSortArray[0]);

    printf("Array before bubble sorting: ");
    PrintArray(bubbleSortArray, length);

    bubbleSort(bubbleSortArray, length);

    printf("Array after bubble sorting: ");
    PrintArray(bubbleSortArray, length);

    int insertSortArray[] = {9, 8, 7, 2, 1, 4, 5};
    int lengthInsertSort = sizeof(insertSortArray) / sizeof(insertSortArray[0]);

    printf("Array before insertion sorting: \n");
    PrintArray(insertSortArray, lengthInsertSort);
    insertionSort(insertSortArray, lengthInsertSort);
    printf("Array after insertion sorting: ");
    PrintArray(insertSortArray, lengthInsertSort);

    return 0;
}
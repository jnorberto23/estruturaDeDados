#include <stdlib.h>
#include <stdio.h>
#include "sorts.h"
#include "sorts.c"


int main(void)
{
    int array[] = {1, 5, 7, 9, 2, 3, 0};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Array before sorting: ");
    PrintArray(array, length);

    bubbleSort(array, length);

    printf("Array after sorting: ");
    PrintArray(array, length);
    return 0;
}
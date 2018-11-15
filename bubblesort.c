
#include <stdio.h>
#include <time.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    clock_t st,en;
    double t;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    st = clock();
    bubbleSort(arr, n);
    en = clock();
    t=(double)(en -st)/CLOCKS_PER_SEC;
    printf("Sorted array: \n");
    printf("time is %f",t);
    printArray(arr, n);

    return 0;
}

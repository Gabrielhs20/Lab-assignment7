#include <stdio.h>
#include <stdlib.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int count;
    int i, j;
    int x = 0;
   
    
    for (i = 0; i < n - 1; i++){
    count = 0;
    x++;
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                count++;
                
            }
    
    printf("Number of swaps of element #%i: %d\n",x, count);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    //Declaration of the array
    int *arr;
    
    arr = (int*)malloc(sizeof(int)*9);

    arr[0] = 97;
    arr[1] = 16;
    arr[2] = 45;
    arr[3] = 63;
    arr[4] = 13;
    arr[5] = 22;
    arr[6] = 7;
    arr[7] = 58;
    arr[8] = 72;
    
    int n = 9;
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

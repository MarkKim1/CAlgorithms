// C program to sort the array in an
// ascending order using selection sort
 
#include <stdio.h>
 
void swap(char* xp, char* yp)
{
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// Function to perform Selection Sort
void selectionSort(char arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
    for (int i = 0; i < n; i++)
        printf("%c", arr[i]);
    printf("\n");
}
 
// Driver code
int main()
{
    char arr[10];
    scanf("%s",arr);
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n); 
    return 0;
}
// WAP to Print array elements using Pointer Traversal.
#include <stdio.h>

void printArrayByPointer(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArrayByPointer(arr, n);

    return 0;
}
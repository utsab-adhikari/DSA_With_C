// WAP to Find Sum of integer array elements using Pointer Traversal.
#include <stdio.h>

int SumOfArrayByPointer(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(arr + i);
    }
    return sum;
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

    int sum = SumOfArrayByPointer(arr, n);
    printf("Sum of the array elements: %d\n", sum);

    return 0;
}
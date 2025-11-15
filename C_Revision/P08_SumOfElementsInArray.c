//WAP to find sum of elements in an array using Recursion.

#include <stdio.h>
int sumOfArray(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumOfArray(arr, n - 1);
}

int main()
{
    int n;
    int arr[100];

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = sumOfArray(arr, n);
    printf("Sum of elements in array: %d\n", sum);

    return 0;
}   
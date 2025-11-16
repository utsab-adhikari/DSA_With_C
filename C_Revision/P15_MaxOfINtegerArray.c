// WAP to Find Max of integer array elements using Pointer.
#include <stdio.h>

int MaxOfArrayByPointer(int *arr, int n)
{
    int max = *(arr+0);
    for (int i = 0; i < n; i++)
    {
        if(max<*(arr+i)) {
            max = *(arr+i); 
        }
    }
    return max;
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

    int maxOfArray = MaxOfArrayByPointer(arr, n);
    printf("Max of the array elements: %d\n", maxOfArray);

    return 0;
}
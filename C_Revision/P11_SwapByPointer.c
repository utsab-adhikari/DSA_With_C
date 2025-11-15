// WAP to Swap two numbers using Pointer.
#include <stdio.h>

int main()
{
    int a, b, *p1, *p2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
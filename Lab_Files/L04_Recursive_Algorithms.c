// Lab_Files/L04_Recursive_Algorithms.c: Tower of Hanoi Problem using Recursion

#include <stdio.h>

int i = 0;
int toh(int n, char source, char destination, char auxiliary)
{

    if (n == 0)
    {
        return 0;
    }
    toh(n - 1, source, auxiliary, destination);
    printf("\nStep %d: move disk %d from pole %c to pole %c ", ++i, n, source, destination);
    toh(n - 1, auxiliary, destination, source);
}

int main()
{
    int num;
    char src, dest, aux;

    printf("\n<--- Tower of Hanoi --->\n");
    printf("\nEnter no of Disks: ");
    scanf("%d", &num);

    printf("\nEnter source pole: ");
    scanf(" %c", &src);
    printf("\nEnter destination pole: ");
    scanf(" %c", &dest);
    printf("\nEnter auxiliary pole: ");
    scanf(" %c", &aux);

    printf("\n Steps -->\n");

    toh(num, src, dest, aux);
    printf("\n");
    printf("\nNo of Steps to Solve %d disks in Tower of Hanoi Problem: %d \n", num, i);

    return 0;
}



/*
for other recursive algorithms refer Recursion Folder.
    - Sum of Natural Numbers
    - Factorial of a Number
    - Fibonacci Series
    - GCD of two Numbers

*/
// WAP to find Fibonacci series up to n terms by Recursion.
#include <stdio.h>

void fibo(int n)
{
    int a = 0, b = 1, c;

    if (n <= 0)
        return;

    printf("%d\t", a);

    if (n == 1)
        return;

    printf("%d\t", b);

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main()
{
    int num;

    printf("Enter how many terms: ");
    scanf("%d", &num);

    fibo(num);

    return 0;
}

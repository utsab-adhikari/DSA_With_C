// WAP to find Factorial of a Number by Recursion
#include<stdio.h>

int factorial(int n) {
    int fact=1;
    if(n == 0) {
        return 1; // base case
    } else {
        fact = n * factorial(n-1); // recursive case
    }
     return fact;
}

int main() {
    int num, result;

    printf("Enter a Number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("The factorial of %d is %d\n", num, result);

    return 0;
}
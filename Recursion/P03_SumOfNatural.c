// WAP to find Factorial of a Number by Recursion
#include<stdio.h>

int sumRecursive(int n) {
    int sum=0;
    if(n == 0) {
        return 0; // base case
    } else {
        return (sum = n + sumRecursive(n-1)); // recursive case
    }
}

int main() {
    int num, result;

    printf("Enter a Number: ");
    scanf("%d", &num);

    result = sumRecursive(num);

    printf("The Sum of %d natural number by Recursion is %d\n", num, result);

    return 0;
}
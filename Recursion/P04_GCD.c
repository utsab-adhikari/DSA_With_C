// Program to find GCD of two numbers using Recursion
#include<stdio.h>

int getGCD(int a, int b) {
    if(b==0) {
        return a;
    } else {
        return getGCD(b, a%b);
    }
}

int main() {
    
    int num1, num2;
    
    printf("\nEnter two Numbers to find GCD -->\n");
    printf("Enter first: ");
    scanf("%d", &num1);
    printf("Enter second: ");
    scanf("%d", &num2);
    
    int gcd = getGCD(num1, num2);
    
    printf("\nThe GCD of %d and %d is: %d \n", num1, num2, gcd);
    
    return 0;
}
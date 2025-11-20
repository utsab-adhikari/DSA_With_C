//Factorial of Number by While Loop
#include<stdio.h>

int main() {

    int n, fact=1;
    printf("Enter a Number:");
    scanf("%d", &n);

    int temp = n;
    
    while(n!=0) {
        fact = fact * n;
        n--;
    }

    printf("\nThe Factorial of %d is %d \n", temp, fact);
    return 0;

}
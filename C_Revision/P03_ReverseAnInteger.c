// WAP to find Reverse of the Provided Number
#include<stdio.h>

int main() {
    int num, digit, rev=0;

    printf("Enter a three digit number:");
    scanf("%d",  &num);

    while(num!=0) {
        digit = num%10;
        rev = rev*10 + digit;
        num = num/10;
    }

    printf("The reverse of the given number is: %d\n", rev);
 return 0;
}
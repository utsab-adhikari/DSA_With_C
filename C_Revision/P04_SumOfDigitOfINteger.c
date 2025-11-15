//WAP to Find Sum of Digits of the Provided Integer
#include<stdio.h>

int main() {
    int num, digit, sum=0, temp;

    printf("\nEnter a Number : ");
    scanf("%d", &num);

    temp = num;

    while(num!=0) {
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }

    printf("\n The Sum of digits of %d is: %d\n", temp, sum);
    return 0;
}
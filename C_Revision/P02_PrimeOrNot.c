// WAP to Check the given number is Prime or Not;
#include <stdio.h>

int main() {

    int num, i, temp;

    printf("\nEnter a Number:");
    scanf("%d", &num);

    temp = num;

    for(i=2;i<=num; i++) {
            if(num%i==0) {
                break;
            }
    }

    if(i == num ) {
        printf("\nThe Number %d is Prime.\n", num);
    } else {
        printf("\nThe Number %d is Composite.\n", num);
    }

    return 0;
}
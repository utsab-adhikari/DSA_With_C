#include <stdio.h>

int main()
{

    int num1, num2, result = 0, choice;

    printf("\nSelect Your Choice:\n1: Sum\n2: Sub\n3: Mul\n4: Div\n Choice:");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nSum Selected \nEnter a Number:");
            scanf("%d", &num1);
            printf("Enter another Number:");
            scanf("%d", &num2);

            result = num1 + num2;
            printf("The sum of %d & %d is %d\n", num1, num2, result);
            break;

        case 2:
            printf("\nSubtraction Selected \nEnter a Number:");
            scanf("%d", &num1);
            printf("Enter another Number:");
            scanf("%d", &num2);

            result = num1 - num2;
            printf("The sub of %d & %d is %d\n", num1, num2, result);
            break;

        case 3:
            printf("\nMultiplication Selected \nEnter a Number:");
            scanf("%d", &num1);
            printf("Enter another Number:");
            scanf("%d", &num2);

            result = num1 * num2;
            printf("The multiplication of %d & %d is %d\n", num1, num2, result);
            break;

        case 4:
            printf("\nDivision Selected \nEnter a Number:");
            scanf("%d", &num1);
            printf("Enter another Number:");
            scanf("%d", &num2);

            result = num1 / num2;
            printf("The division of %d & %d is %d\n", num1, num2, result);
            break;

        default:
            printf("\nInvalid Choice Try Again\n");
    }
    return 0;
}
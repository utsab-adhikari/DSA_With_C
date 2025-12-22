#include<stdio.h>
#include "stack.h"

void initStack(Stack *s) {
    s->top = -1;
}
int isEmpty(Stack *s) {
    return s->top == -1;
}
int isFull(Stack *s) {
    return s->top == MAX-1;
}
int push(Stack *s, int value) {
    if(isFull(s)) {
        printf("\nThe Stack is Full StackOverflow Warning !!");
		return 0;
    }
    s->data[++s->top] = value;
    printf("\n%d is added to the Stack", value);
    return 0;
}
int pop(Stack *s) {
    if(isEmpty(s)) {
       printf("\nThe Stack is Empty StackUnderflow Warning !!");
       return 0;
    }
    return s->data[s->top--];
}
int peek(Stack *s) {
    if(isEmpty(s)) {
           printf("\nThe Stack is Empty!!");
           return 0;
        }
     return s->data[s->top];
}
int display(Stack *s) {
    printf("\n<--- Stack --->\n");
    for(int i=0;i<=s->top;i++) {
        printf("Stack No: %d && Value: %d\n", i, s->data[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    Stack s;
    initStack(&s);
    int choice, value;

    while(1) {
        printf("\n<--- Stack Menu --->\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check isEmpty\n");
        printf("5. Check isFull\n");
        printf("6. Display Stack\n");
        printf("7. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter item to be Pushed: ");
                scanf("%d", &value);
                push(&s, value);
                break;

            case 2:
                value = pop(&s);
                if(value != -1) {
                	printf("\nPoped item: %d\n", value);
                }
                break;

            case 3:
                value = peek(&s);
                printf("\nPeeked item: %d\n", value);
                break;

            case 4:
                if(isEmpty(&s)) {
                    printf("\nThe Stack is Empty\n");
                } else {
                    printf("\nThe Stack is Not Empty\n");
                }
                break;

            case 5:
                if(isFull(&s)) {
                    printf("\nThe Stack is Full\n");
                } else {
                    printf("\nThe Stack is Not Full\n");
                }
                break;

            case 6:
                display(&s);
                break;

            case 7:
                printf("\nExiting Program.....\n");
                return 0;

            default:
                printf("\nInvalid choice, Try Again\n");
        }
    }

    return 0;
}

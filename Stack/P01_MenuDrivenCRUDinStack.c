// Menu driven CRUD (push, pop, peek) in Stack;

#include<stdio.h>

#define MAX 5

int stack[MAX];

int top = -1;

int push(int value);
int pop();
int peek();
int isEmpty();
int isFull();

void display();

int main() {
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
                if(push(value)) {
                    printf("\n %d is Added to Stack\n", value);
                }
                break;

            case 2:
                value = pop();
                printf("\nPoped item: %d\n", value);
                break;
            
            case 3:
                value = peek();
                printf("\nPeeked item: %d\n", value);
                break;
            
            case 4:
                if(isEmpty()) {
                    printf("\nThe Stack is Empty\n");
                } else {
                    printf("\nThe Stack is Not Empty\n");
                }
                break;
            
            case 5:
                if(isFull()) {
                    printf("\nThe Stack is Full\n");
                } else {
                    printf("\nThe Stack is Not Full\n");
                }
                break;

            case 6:
                display();
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

int push(int value){
    if(isFull()) {
        printf("\nError While Pushing !!\nStack Overflow !!!\n");
        return 0;
    }
    stack[++top] = value;
    return 1;
};
int pop(){
    if(isEmpty()) {
        printf("\nError While Poping !!\nStack Underflow !!!\n");
    }

    return stack[top--];
};
int peek(){
    if(isEmpty()) {
        printf("\nError While Peeking !!\nStack Underflow !!!\n");
    }

    return stack[top];
};
int isEmpty(){
    return (top == -1);
};
int isFull(){
    return (top == MAX);
};

void display(){
    printf("\n<--- Stack Items --->\n");
    for(int i=top; i>=0;i--) {
        printf("Stack No: %d, Item: %d\n", i, stack[i]);
    }
    printf("<--- Stack Ends --->\n");
};
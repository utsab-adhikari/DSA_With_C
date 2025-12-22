#ifndef STACK_H
#define STACK_H

#define MAX 5

typedef struct {
    int data[MAX];
    int top;
} Stack;

void initStack(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
int push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);
int display(Stack *s);

#endif

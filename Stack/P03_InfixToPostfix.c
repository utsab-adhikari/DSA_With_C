#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int prec(char c) {
    switch(c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

int isRightAssociative(char c) {
    return c == '^';
}

void infixToPostfix(char* exp) {
    int len = strlen(exp);
    char result[len+1];
    char stack[len];
    int j=0, top=-1;

    for(int i=0;i<len;i++) {
        char c = exp[i];

        if(isalnum(c)) {
            result[j++] = c;
        }
        else if(c == '(') {
            stack[++top] = c;
        }
        else if(c == ')') {
            while(top != -1 && stack[top] != '(') {
                result[j++] = stack[top--];
            }
            top--; // pop '('
        }
        else {
            while(top != -1 && stack[top] != '(' && 
                  (prec(stack[top]) > prec(c) || 
                  (prec(stack[top]) == prec(c) && !isRightAssociative(c)))) {
                result[j++] = stack[top--];
            }
            stack[++top] = c;
        }
    }
    
    while(top != -1) {
        result[j++] = stack[top--];
    }
    result[j] = '\0';
    printf("Postfix Expression: %s\n", result);
}

int main() {
    char exp[100];
    printf("Enter an infix expression: ");
    scanf("%s", exp);
    infixToPostfix(exp);
    return 0;
}

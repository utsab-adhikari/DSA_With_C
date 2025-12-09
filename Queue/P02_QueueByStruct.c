// Queue implementation using structure
#include<stdio.h>
#define MAX 5

struct Queue {
    int queue[MAX];
    int front;
    int rear;
};

void initializeQueue(struct Queue *p) {
    p->front = -1;
    p->rear = -1;
}

int isEmpty(struct Queue *p) {
    return (p->front == -1 && p->rear == -1);
}
int isFull(struct Queue *p) {
    return (p->rear == MAX-1);
}

int enqueue(struct Queue *p, int data) {
    if(isFull(p)) {
        printf("\nThe Queue is full\nOverflow Warning");
        return -1;
    } 
    if(isEmpty(p)) {
        p->front++;
    }
    p->rear++;
    p->queue[p->rear] = data;
    printf("\n%d is added to the queue", data);
    return 1;
}

int dequeue(struct Queue *p) {
    if(isEmpty(p)) {
        printf("\nThe Queue is Empty\nUnderflow Warning\n");
        return -1;
    }
    int data = p->queue[p->front];
    if(p->front == p->rear) {
        p->front = -1;
        p->rear = -1;
    }
    p->front++;
    printf("\nThe Element %d is deleted from the Queue\n", data);
    return data;
}

int display(struct Queue *p) {
    if(isEmpty(p)) {
        printf("\nThe Queue is Empty\n");
        return -1;
    }
    for(int i=p->front;i<=p->rear;i++) {
        printf("\nQueue NO: %d, Element: %d\n", i, p->queue[i]);
    }
    return 1;
}


int main() {
    struct Queue p;
    initializeQueue(&p);
    
    int choice, data;
    
    while(1) {
        printf("\n<--- Queue --->\n");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Check Empty");
        printf("\n4. Check Full");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nEnter Data to be added in the Queue: ");
                scanf("%d", &data);
                enqueue(&p, data);
                break;
                
             case 2:
                dequeue(&p);
                break;
                
            case 3: 
                if(isEmpty(&p)) {
                    printf("\nThe Queue is Empty\n");
                } else {
                    printf("\nThe Queue is Not Empty\n");
                }
                break;
                
            case 4: 
                if(isFull(&p)) {
                    printf("\nThe Queue is Full\n");
                } else {
                    printf("\nThe Queue is Not Full\n");
                }
                break;
                
            case 5: 
                display(&p);
                break;
                
            case 6: 
                printf("\nExiting the program.....\n");
                return 0;
                
            default: 
                printf("\nInvalid Choice, Try Again...\n");
            
            
        }
        
    }
}

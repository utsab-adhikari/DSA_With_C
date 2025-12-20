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

int getRear(struct Queue *p) {
	return p->rear;
}

int getFront(struct Queue *p) {
	return p->front;
}

int enqueue(struct Queue *p, int data) {
    if(p->rear == MAX-1) {
        p->rear = -1;
    }
    if(isEmpty(p)) {
            p->front++;
    }
    p->rear++;
    p->queue[p->rear] = data;
    printf("\n%d is added to the queue no: %d", data, p->rear);
    return 1;
}

int dequeue(struct Queue *p) {
    if(isEmpty(p)) {
        printf("\nThe Queue is Empty\nUnderflow Warning\n");
        return -1;
    }
    int data = p->queue[p->front];
    p->queue[p->front] = 0;
    p->front++;
    if(p->front == MAX-1) {
    	p->front = -1;
    }
    printf("\nThe Element %d is deleted from the Queue\n", data);
    return data;
}

int display(struct Queue *p) {
    if(isEmpty(p)) {
        printf("\nThe Queue is Empty\n");
        return -1;
    }

    for(int i=0;i<MAX;i++) {
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
        printf("\n4. Display");
        printf("\n5. getFront");
        printf("\n6. getRear");
        printf("\n7. Exit");
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
                display(&p);
                break;

			case 5: 
                data = getFront(&p);
                printf("\nFront: %d\n", data);
                break;

			case 6: 
                data = getRear(&p);
                printf("\nRear: %d\n", data);
                break;
                
            case 7: 
                printf("\nExiting the program.....\n");
                return 0;
                
            default: 
                printf("\nInvalid Choice, Try Again...\n");
            
            
        }
        
    }
    return 0;
}

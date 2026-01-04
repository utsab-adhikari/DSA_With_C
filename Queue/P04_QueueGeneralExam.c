#include<stdio.h>
#define MAX 5

struct Queue {
    int queue[MAX];
    int capacity;
    int size;
};

void initQ(struct Queue *p) {
    p->capacity=MAX;
    p->size=0;
}

int isEmpty(struct Queue *p) {
    return p->size==0;
}

int isFull(struct Queue *p){
    return p->size==p->capacity;
}

void enqueue(struct Queue *p, int value) {
    if(isFull(p)) {
        printf("\nOverflow");
    } else {
        p->queue[p->size++] = value;
        printf("\n %d is added to queue", value);
    }
}

int dequeue(struct Queue *p) {
    if(isEmpty(p)) {
        printf("\nUnderflow");
        return 0;
    }
    int value = p->queue[0];
    for(int i=0;i<p->size;i++) {
        p->queue[i] = p->queue[i+1];
    }
    p->size--;
    return value;
}

int getFront(struct Queue *p) {
    if(isEmpty(p)) {
        printf("\nUnderflow");
        return 0;
    }
    return p->queue[0];
}

int getRear(struct Queue *p) {
    if(isEmpty(p)) {
        printf("\nUnderflow");
        return 0;
    }
    return p->queue[p->size-1];
}

void display(struct Queue *p) {
    if(isEmpty(p)) {
        printf("Warning");
    } else {
        for(int i=0;i<p->size;i++) {
              printf("\n %d", p->queue[i]);
        }
    }
}

int main() {
    struct Queue p;
    
    initQ(&p);
    
    
    enqueue(&p, 10);
    enqueue(&p, 20);
    
    printf("\n Enqueue -->");
    display(&p);
    
    int a = dequeue(&p);
    
    printf("\n Dequeued value = %d\n", a);
    
    printf("\n Dequeue -->");
    display(&p);

    
    return 0;
}


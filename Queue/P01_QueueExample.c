#include<stdio.h>
#define MAX 5

int size=-1;

int queue[MAX] = {};

int enqueue(int num);
int dequeue();
int isEmpty();
int isFull();
int getFront();
int getRear();
void display();


int main() {

	int choice, num1;
	
	while(1) {
			printf("\n<--- We are at Queue --->\n");
			printf("1. Enqueue\n");
			printf("2. Dequeue\n");
			printf("3. Get Front\n");
			printf("4. Get Rear\n");
			printf("5. Check is Empty\n");
			printf("6. Check is Full\n");
			printf("7. Display Queue\n");
			printf("8. Exit\n");
			printf("Your Choice: ");
			scanf("%d", &choice);

			switch(choice) {
				case 1:
					printf("\nEnter integer to be enqueue in the Queue: ");
					scanf("%d", &num1);
					if(enqueue(num1) != -1) {
						printf("\n%d is Added to Queue\n", num1);
					}
					break;

				case 2: 
					num1 = dequeue();
					if(num1 == -1) {
						break;
					}
					printf("\n%d is Dequeue from Queue\n", num1);
					break;
					
				case 3: 
				    num1 = getFront();
					if(num1 == -1) {
						break;
					}
					printf("\nFront: %d\n", num1);
				    break;
				    
				case 4: 
				    num1 = getRear();
					if(num1 == -1) {
						break;
					}
					printf("\nReart %d\n", num1);
				    break;

				case 5:
					if(isEmpty()) {
						printf("\nThe Queue is Empty.\n");
					} else {
						printf("\nThe Queue is not Empty\n");
					}
					break;
					
				case 6: 
					if(isFull()) {
						printf("\nThe Queue is Full.\n");
					} else {
						printf("\nThe Queue is not Full.\n");
					}
					break;
					
				case 7: 
				    display();
				    break;
					
				case 8: 
					return 0;

				default: 
					printf("\nInvalid Choice\n");
			}
	}
	
	return 0;
}

int enqueue(int num){
	if(isFull()) {
		printf("\nError While Enqueue\n !!! Overflow Warning !!!\n");
		return -1;
	}

	queue[++size] = num;

	return 1;
	
};
int dequeue(){
	if(isEmpty()) {
		printf("\nError While Dequeue\n !!! Underflow Warning !!!\n");
		return -1;
	}
	int tempo = queue[0];
	for(int i=0;i<=size;i++) {
		    queue[i-1] = queue[i];
	}
	size--;
	return tempo;
};
int isEmpty(){
	return size==-1;
};
int isFull(){
	return size==MAX;
};
int getFront(){
    if(isEmpty()) {
		printf("\nError While getting Front\n !!! Underflow Warning !!!\n");
		return -1;
	}
	
	return queue[0];
	
};
int getRear(){
    if(isEmpty()) {
		printf("\nError While getting Rear\n !!! Underflow Warning !!!\n");
		return -1;
	}
	
	return queue[size];
};
void display() {
    printf("\n<--- Queue --->\n");
    for(int i=0; i<=size;i++) {
        printf("\nQueue No: %d, Item: %d\n", i, queue[i]);
    }
     printf("\n<--- End Queue --->\n");
};

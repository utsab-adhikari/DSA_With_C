#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
} Node;

Node* Head = NULL;

Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void insertAtFirst(int data) {
	Node* newNode = createNode(data);
	if(newNode == NULL) {
		return;
	}
	if(Head == NULL) {
		Head = newNode;
		return;
	}
	newNode->next = Head;
	newNode->prev = NULL;
	Head = newNode;
}

void insertAtPos(int data, int pos) {
	if(pos == 0) {
		insertAtFirst(data);
		return;
	}
	Node* temp;
	temp = Head;
	int count = 0;
	while(count<pos-1 && temp != NULL) {
		temp = temp->next;
		count++;
	}
	if(temp == NULL) {
	printf("\n Position out of List \n");
		return;
	}
	Node* newNode = createNode(data);
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
}

void insertAtLast(int data) {
	if(Head == NULL) {
		insertAtFirst(data);
		return;
	}
	Node* newNode = createNode(data);
	Node* temp = Head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	newNode->next = NULL;
}

void deleteFromFirst() {
	if(Head == NULL) {
		return;
	}
	Node* temp = Head;
	Head = Head->next;
	Head->prev = NULL;
	free(temp);
}

void deleteFromPos(int pos) {
	if(Head == NULL) {
		return;
	}
	if(pos == 0) {
		deleteFromFirst();
		return;
	}
	Node* temp = Head;
	int count = 0;
	while(count<pos-1 && temp!=NULL) {
		temp = temp->next;
		count++;
	}
	if(temp == NULL) {
		printf("\nPosition out of List");
		return;
	}
	Node* delNode = temp->next;
	temp->next = delNode->next;
	delNode->next->prev = temp;
	free(delNode);
}

void deleteFromLast() {
	if(Head == NULL) {
		return;
	}
	Node* temp = Head;
	while(temp->next !=NULL) {
		temp = temp->next;
	}
	Node* delNode = temp->next;
	temp->next = NULL;
	free(delNode);
}

void display() {
	Node* temp = Head;
	while(temp != NULL) {
		printf("[%d] <->", temp->data);
		temp = temp->next;
	}
	printf("NULL");
}
 int main() {
 	Node* root = NULL;
 	int choice, num1, num2;
 	while(1) {
 		printf("\nEnter your Choice -->\n");
 		printf("\n1. InsertAtFirst");
 		printf("\n2. InsertAtPos");
 		printf("\n3. InsertAtLast");
 		printf("\n4. DeleteFromFirst");
 		printf("\n5. DeleteFromPos");
 		printf("\n6. DeleteFromLast");
 		printf("\n7. Dispplay");
 		printf("\n8. Exit");
		printf("\nChoice: ");
 		scanf("%d", &choice);

		printf("\n");
 		switch(choice) {
			case 1: 
				printf("\nEnter Number to Insert At first:");
				scanf("%d", &num1);
				insertAtFirst(num1);
				break;
				
			case 2: 
				printf("\nEnter Position:");
				scanf("%d", &num1);
				printf("\nEnter Number to Insert At Position %d :", num1);
				scanf("%d", &num2);
				insertAtPos(num2, num1);
				break;
				
			case 3: 
				printf("\nEnter Number to Insert At Last:");
				scanf("%d", &num1);
				insertAtLast(num1);
				break;

			case 4: 
				printf("\nDeleting Node From First..");
				deleteFromFirst();
				break;
				
			case 5: 
				printf("\nEnter Position to delete:");
				scanf("%d", &num1);
				printf("\nDeleting Node From Position %d ..", num1);
				deleteFromPos(num1);
				break;	
							
			case 6: 
				printf("\nDeleting Node From Last..");
				deleteFromLast();
				break;

			case 7: 
				printf("\nDispay Nodes ---->\n");
				display();
				break;

			case 8: 
				printf("\nExiting....");
				return 0;
				break;


			default: 
				printf("\nInvalid Choice.");
				break;
 			
 		}
 	}
 	return 0;
 }

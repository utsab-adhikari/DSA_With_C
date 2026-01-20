#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* Head = NULL;

Node* createNode(int data) {
	Node* newNode = malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

int insertAtFirst(int data) {
	Node* newNode = createNode(data);
	if(newNode == NULL) {
		return 0;
	}
	if(Head == NULL) {
		Head = newNode;
		return 1;
	}
	newNode->next = Head;
	Head = newNode;
	return 1;
}

int insertAtPos(int data, int pos) {
	if(pos == 0) {
		insertAtFirst(data);
		return 1;
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
		return 0;
	}
	Node* newNode = createNode(data);
	newNode->next = temp->next;
	temp->next = newNode;
	return 1;
}


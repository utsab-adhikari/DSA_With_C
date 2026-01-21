#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* Head = NULL;

Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
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

int insertAtEnd(int data) {
	Node* newNode = createNode(data);
	if(Head == NULL) {
		Head = newNode;
		return 1;
	}
	Node* temp = Head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
	return 1;
}

int deleteFromFirst() {
	if(Head == NULL) {
		return 0;
		printf("\nLinked List is Empty.");
	}
	Node* temp = Head;
	Head = Head->next;
	free(temp);
	
	return 1;
}

int deleteFromPos(int pos) {
	if(Head == NULL) {
		printf("\nLinked List is Empty.");
		return 0;
	}
	if(Head->next == NULL) {
		deleteFromFirst();
	}
	Node* temp = Head;
	int count = 0;
	while(count !=pos-1 && temp != NULL) {
		temp = temp->next;
		count++;
	}
	if(temp == NULL) {
		printf("\nInvalid Position");
		return 0;
	}
	Node* delNode = temp->next;
	temp->next = delNode->next;
	free(delNode);
	return 1;
}
 int deleteFromEnd() {
 	if(Head == NULL) {
 		printf("\nLinked List is Empty.");
 		return 0;
 	}
 	if(Head->next == NULL) {
 		deleteFromFirst();
 		return 1;
 	}
 	Node* temp = Head;
 	while(temp->next->next != NULL) {
 		temp = temp->next;
 	}
 	Node* delNode = temp->next;
 	temp->next = NULL;
 	free(delNode);
 	return 1;
 }

 void display() {
 printf("\n<=== Linked List ===>\n");
 	Node* temp = Head;
 	while(temp != NULL) {
        printf("[%d] ->", temp->data);
        temp = temp->next;
 	}
    printf("NULL\n");
 }


 int main() {
    int choice, num1, pos;
    while(1) {
        printf("\n\n<=== Linked List Operations ===>\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Position\n");
        printf("3. Insert at End\n");
        printf("4. Delete from First\n");
        printf("5. Delete from Position\n");
        printf("6. Delete from End\n");
        printf("7. Display Linked List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter number to insert at first: ");
                scanf("%d", &num1);
                insertAtFirst(num1);
                break;
                
            case 2:
                printf("Enter number to insert: ");
                scanf("%d", &num1);
                printf("Enter position to insert at: ");
                scanf("%d", &pos);
                insertAtPos(num1, pos);
                break;
                
            case 3:
                printf("Enter number to insert at end: ");
                scanf("%d", &num1);
                insertAtEnd(num1);
                break;
                
            case 4:
                deleteFromFirst();
                break;
                
            case 5:
                printf("Enter position to delete from: ");
                scanf("%d", &pos);
                deleteFromPos(pos);
                break;
                
            case 6:
                deleteFromEnd();
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
#include<stdio.h>
#define SIZE 10

int array[SIZE];

int hash(int key) {
	return key%SIZE;	
}

void insert(int value) {
	int index = hash(value);
	array[index] = value;
	printf("\nValue %d added to index %d\n", value, index);
}

void searchByHash(int key) {
	int index = hash(key);
	if(index>=SIZE) {
		printf("\nOut of Size");
		return;
	}
	if(array[index] && array[index]!=0) {
		printf("\nThe element %d found at index %d\n", key, index);
	} else {
		printf("Not Found");
	}
}


int main() {
	insert(10);
	insert(2);
	insert(15);

    searchByHash(15);
    searchByHash(9);
	return 0;
}

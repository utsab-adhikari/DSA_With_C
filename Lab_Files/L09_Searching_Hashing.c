#include<stdio.h>

void linearSearch(int arr[], int n, int key){
	int i;
	for( i=0;i<n;i++) {
		if(key == arr[i]) {
			break;
		}
	}
	printf("\nThe Index of the Element %d id %d", key, i); 
}

void binarySearch(int arr[], int n, int key) {
	int i, high =n, low=0;
	if(arr[i]) {
		printf("\nThe Index of the Element %d id %d", key);
		return;
	}
	if(arr[i]>key) {
		
	}
}

int main() {
	int input[10] = {3, 4, 5, 1,  6, 7, 2, 8, 9, 0};
	linearSearch(input, 10, 7);
	return 0;
}

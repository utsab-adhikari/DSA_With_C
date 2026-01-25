#include<stdio.h>

void linearSearch(int arr[], int n, int key){
	int i;
	while(i<n) {
		if(arr[i]==key) {
			break;
		}
		i++;
	}
	printf("\nThe Index of the Element %d id %d", key, i); 
}

void binarySearch(int arr[], int n, int key) {
	int i, high =n, low=0;
	while(low<=high) {
		int mid = (low+high)/2;
		if(arr[mid]==key) {
			printf("\nThe Index of the Element %d id %d", key, mid); 
			return;
		} else if(arr[mid]<key) {
			low = mid+1;
		} else {
			high = mid-1;
		}
	}
	printf("\nElement not found");
}

int main() {
	int input[10] = {3, 4, 5, 1,  6, 7, 2, 8, 9, 0};
	binarySearch(input, 10, 7);
	return 0;
}

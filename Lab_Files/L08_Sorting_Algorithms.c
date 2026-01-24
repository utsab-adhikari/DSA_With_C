#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j--;
        }

        arr[j + 1] = key;  
    }
}

void bubbleSort(int arr[], int n) {
	int swapped=1, j=n, k=0;
	while(swapped) {
		swapped = 0;	
   		 for(int i = 1;i<j;i++) {
			if(arr[i-1]>arr[i]) {
				int temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
				swapped = 1;
				k=i;
			}
		}
		j = k;
	}
}

void quickSort(int arr[], int n) {
    if(n<=1) {
        return;
    }
    int pivot = arr[0];
    int rightSubarray[10], leftSubarray[10], r=0,l=0;
    for(int i=1;i<n;i++) {
        if(arr[i] > pivot) {
            rightSubarray[r++] = arr[i];
        } else {
            leftSubarray[l++] = arr[i];
        }
    }
    
    quickSort(leftSubarray, l);
    quickSort(rightSubarray, r);
    
    int k =0;
    for(int i=0;i<l;i++) {
        arr[k++] = leftSubarray[i];
    }
    
    arr[k++] = pivot;
    for(int i=0;i<r;i++) {
        arr[k++] = rightSubarray[i];
    }
    
}



int main() {
    int input[11] = {9, 4, 6, 5, 2, 8, 9, 10, 16, 17, 2};

    quickSort(input, 11);
 
    for (int i = 0; i < 11; i++) {
        printf("%d ", input[i]);
    }
    return 0;
}

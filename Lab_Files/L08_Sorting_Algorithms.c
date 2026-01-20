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

int main() {
    int input[5] = {3, 4, 6, 5, 2};

    insertionSort(input, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", input[i]);
    }

    return 0;
}

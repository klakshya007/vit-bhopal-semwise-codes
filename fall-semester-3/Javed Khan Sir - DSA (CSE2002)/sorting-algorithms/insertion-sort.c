#include <stdio.h>

// Insertion sort function
// a[] -> array to sort
// n   -> number of elements
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];  // element to be inserted at correct position
        int j = i - 1;

        // Shift elements greater than key one position ahead
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        // Place key at its correct position
        a[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertionSort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

// Swap function: swaps two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Selection sort function
// a[] -> array to sort
// n   -> number of elements
void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;  // assume current element is minimum

        // Find the smallest element in remaining unsorted array
        for (int j = i + 1; j < n; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        if (min != i) {
            swap(&a[i], &a[min]);
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    selectionSort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

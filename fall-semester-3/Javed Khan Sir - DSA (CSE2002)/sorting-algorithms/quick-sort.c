#include <stdio.h>

// Swap function: swaps two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function: places pivot in correct position
// and arranges elements <= pivot to left, > pivot to right
int partition(int a[], int low, int high) {
    int pivot = a[low]; // choosing first element as pivot
    int i = low + 1;
    int j = high;

    while (1) {
        while (i <= high && a[i] <= pivot) i++; // find element > pivot
        while (j >= low && a[j] > pivot) j--;   // find element <= pivot

        if (i >= j) break;

        swap(&a[i], &a[j]); // swap out-of-place elements
    }

    swap(&a[low], &a[j]); // place pivot at correct position

    return j; // pivot index
}

// QuickSort function
void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(a, low, high);
        quickSort(a, low, pivot_index - 1);   // sort left subarray
        quickSort(a, pivot_index + 1, high);  // sort right subarray
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

// Merge function: merge two sorted subarrays into a single sorted array
// a[]   -> array to merge
// low   -> starting index of first half
// mid   -> ending index of first half
// high  -> ending index of second half
void merge(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];  // temporary array to store merged elements

    // Merge elements from both halves in sorted order
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }

    // Copy remaining elements of left half, if any
    while (i <= mid) {
        temp[k++] = a[i++];
    }

    // Copy remaining elements of right half, if any
    while (j <= high) {
        temp[k++] = a[j++];
    }

    // Copy merged elements back to original array
    for (i = 0; i < k; i++) {
        a[low + i] = temp[i];
    }
}

// Recursive merge sort function
// a[]   -> array to sort
// low   -> starting index
// high  -> ending index
void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);       // sort left half
        mergeSort(a, mid + 1, high);  // sort right half
        merge(a, low, mid, high);     // merge both halves
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

    mergeSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

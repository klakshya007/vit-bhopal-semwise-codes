#include <stdio.h>

// Recursive Binary Search function
// a[]   -> array (must be sorted)
// low   -> starting index of search
// high  -> ending index of search
// key   -> value to search
int BinarySearchAlgorithm(int a[], int low, int high, int key) {
    int mid = (low + high) / 2;  // middle index

    if (low <= high) {
        if (key == a[mid]) {
            return mid;          // key found at mid
        } 
        else if (key < a[mid]) {
            // key is in left half
            return BinarySearchAlgorithm(a, low, mid - 1, key);
        } 
        else {
            // key is in right half
            return BinarySearchAlgorithm(a, mid + 1, high, key);
        }
    }
    return -1;  // key not found
}

int main() {
    int key;
    printf("Enter the key: ");
    scanf("%d", &key);

    int a[10] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};  // sorted array
    int high = (sizeof(a) / sizeof(a[0])) - 1;           // last index

    int n = BinarySearchAlgorithm(a, 0, high, key);      // call binary search

    if (n == -1) {
        printf("Element not present in the array.\n");
    } else {
        printf("Element is present at index: %d\n", n);
    }

    return 0;
}

#include <stdio.h>

// Linear search function
// arr[] -> array to search in
// len   -> number of elements in the array
// key   -> element to find
int linearSearch(int arr[], int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;  // element found, return its index
        }
    }
    return -1;  // element not found
}

int main() {
    int arr[] = {10, 30, 40, 20, 50, 60};  // sample array
    int n;  // element to search
    int len = sizeof(arr) / sizeof(arr[0]);  // calculate array length

    printf("Enter the element you would like to search: ");
    scanf("%d", &n);

    int index = linearSearch(arr, len, n);  // call linear search

    if (index == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("The index of the element is: %d\n", index);
    }

    return 0;
}

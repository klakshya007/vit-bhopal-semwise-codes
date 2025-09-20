#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble sort function
// a[] -> array to sort
// n   -> number of elements
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n; i++) {  
        int flag = 0;  // to check if any swap happens in this pass

        // Compare adjacent elements and swap if in wrong order
        for (int j = 0; j < n - i - 1; j++) {  
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]); 
                flag = 1;  // swap happened
            }
        }

        // If no swaps happened, array is already sorted → break early
        if (flag == 0) { 
            break;
        }
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

    bubbleSort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

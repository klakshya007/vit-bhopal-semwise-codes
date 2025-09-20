#include <stdio.h>

// Recursive function to solve Tower of Hanoi
// n       -> number of disks
// fromRod -> rod from which disks are moved
// toRod   -> rod to which disks are moved
// auxRod  -> auxiliary rod used for moving
void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) {
        // Base case: only one disk, move it directly
        printf("\nMove disk 1 from rod %c to rod %c", fromRod, toRod);
        return;
    }

    // Step 1: Move top n-1 disks from 'fromRod' to 'auxRod' using 'toRod' as auxiliary
    towerOfHanoi(n - 1, fromRod, auxRod, toRod);

    // Step 2: Move the remaining disk from 'fromRod' to 'toRod'
    printf("\nMove disk %d from rod %c to rod %c", n, fromRod, toRod);

    // Step 3: Move the n-1 disks from 'auxRod' to 'toRod' using 'fromRod' as auxiliary
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("\nThe sequence of moves involved in the Tower of Hanoi are:\n");
    towerOfHanoi(n, 'A', 'C', 'B'); // Move n disks from A to C using B
    return 0;
}

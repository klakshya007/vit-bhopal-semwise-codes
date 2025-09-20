// Name - Lakshya Kant
// Reg No - 24BCE10549

#include <iostream>         
using namespace std;        

//Function to perform Linear Search
int LinearSearch(int a[], int size, int key) {
    // Iteration through the array
    for (int i = 0; i < size; i++) {
        // If the current element matches the key
        if (a[i] == key) {
            return i;       // Return the index of the found element
        }
    }
    return -1;         
}

//function to call binary search
int BinarySearch(int a[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;   //Calculate mid index
        //element is found at mid
        if (a[mid] == key) {
            return mid;              //Return the index
        } 
        //left half search
        else if (key < a[mid]) {
            return BinarySearch(a, low, mid - 1, key); //recusrive call for left half
        } 
        //right half search
        else {
            return BinarySearch(a, mid + 1, high, key); //recursive call for right half
        }
    }
    return -1;
}
int main() {
    int choice, key, result;
    int a[10] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int size = sizeof(a) / sizeof(a[0]); //Calculating size of array
    // Loop for the menu until user chooses to exit
    do {
        cout << "1. Linear Search\n";
        cout << "2. Binary Search (Divide and Conquer)\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice; 
        //Implemeting Switch Case
        switch (choice) {
            case 1:
                // Prompt user to enter key for linear search
                cout << "Enter the key to search: ";
                cin >> key;
                result = LinearSearch(a, size, key);
                // Check and print search result
                if (result == -1)
                    cout << "Element Not Found in Array (Linear Search)\n";
                else
                    cout << "Element Found at Index " << result << " (Linear Search)\n";
                break;
            case 2:
                // Prompt user to enter key for binary search
                cout << "Enter the key to search: ";
                cin >> key;
                result = BinarySearch(a, 0, size - 1, key);
                // Check and print search result
                if (result == -1)
                    cout << "Element Not Found in Array (Binary Search)\n";
                else
                    cout << "Element Found at Index " <<result<< " (Binary Search)\n";
                break;
            case 3:
                cout << "Programme Stopped\n";
                break;
            default:
                cout << "Invalid Choice! Please try again!\n";
        }
    } while (choice != 3);  // Continue loop until user chooses to exit

    return 0;
}

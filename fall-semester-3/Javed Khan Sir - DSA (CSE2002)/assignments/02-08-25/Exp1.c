/*
Name - Lakshya Kant
Registration Number - 24BCE10549
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) { //Swapping Function Using Call By Reference 
    int temp=*a;
    *a=*b;
    *b=temp;}


// Snippet To Sort An Array Using Bubble Sort
void bubblesort(int a[],int n) { 
    int flag=0;             // Utilizing Flag To Reduce Time Complexity When The Sorting Is Completed Before The Worst Case Scenario
    for (int i=0;i<n;i++) { //Maximum Number Of Passes->Worst Case Scenario 
        for (int j=0;j<n-i-1;j++) {//Comparison During Each Pass
            if (a[j]>a[j+1]) {
                swap(&a[j],&a[j+1]);
                flag=1;
            }
    }
    if (flag==0) {//The 'For' Loop Of Number Of Passes Shall Break, When The Sorting Is Completed
        break;
    }
}
}


// Snippet To Sort An Array Using Merge Sort
void Merge(int a[],int low,int mid, int high) { //Function To Merge The Two Sorted Sub Array In Sorted Order
    int i=low;    //Starting Of The Left Sub Array
    int k=0;      //Index For The Temporary Array
    int j=mid+1;  //Starting Of The Right Sub Array 
    int temp[high-low+1];        // Temporary Array To Hold The Merged Elements 
    while (i<=mid && j <=high) { //Loop To Merge Two Elements In Sorted Order 
        if (a[i]<a[j]) {
            temp[k]=a[i];
            i++;
        }
        else {
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while (i<=mid) {   //Loop To Copy Any Of The Remaining Elements In The Left Sub Array
        temp[k]=a[i];
        i++;k++;
    }
    while (j<=high) {  //Loop To Copy Any Of The Remaininig Elements In The Right Sub Array
        temp[k]=a[j];
        j++;k++;
    }
    for(int i=0;i<high-low+1;i++) { //Copying The Merged Elements Back Into The Original Array
        a[low+i]=temp[i];
    }
}

void MergeSort(int a[], int low, int high) { //Function For Partition Of The Array
    if (low<high) { //Base Condition
    int mid = (low+high) /2; 
    MergeSort(a,low,mid);   //Recursive Call For Left Sub Array
    MergeSort(a,mid+1,high);//Recursive Call For Right Sub Array
    Merge(a,low,mid,high);} //Function Call Merging The Left And Right Sub Array
}


// Snippet To Sort An Array Using Quick Sort
int Partition(int a[], int low, int high) { //Function To Partition An Array By Choosing The First Element As The Pivot
    int pivot = low;  //Assigning The First Element As Pivot
    int i = low +1;   //Left Iterator
    int j=high;       //Right Iterator
    while (i<=j) {
    while(a[i]<=a[pivot]) {//Loop For Left Iterations
        i++;
    }
    while (a[j]>a[pivot]) {//Loop For Right Iterations
        j--;
    }
    if (i<j) {
        swap (&a[i],&a[j]);
    }  
    else {
    break;
} 
}
swap(&a[j], &a[pivot]);//Swapping 'Pivot' And 'J' If 'I' Crosses 'J'            
return j;              //As We Only Change The Elements, Not The Indices Of 'Pivot' & 'J', We Return 'J'
}

void QuickSort(int a[], int low, int high) {//Function For Implementing After Partitioning Of An Array
    if (low<high) {                             //Base Case
        int pivot_index =Partition(a,low,high);
        QuickSort(a,low,pivot_index-1);         //Recursive Call For Left Sub Array
        QuickSort(a,pivot_index+1,high);        //Recursive Call For Right Sub Array
    }
    }


//Main Function To Implement A Menu Driven Sorting Program
int main() {
    int n;
    printf( "Enter The Number Of Elements In The Array : "); //Taking The Size Of The Array
    scanf("%d",&n);
    int a[n];                                  //Initializing The Array With The Enter Size
    printf("Enter The Elements In The Array Separated By A Space : ");                     
    for (int i=0; i<n; i++) { 
        scanf("%d",&a[i]);
    }
    int m;
    printf("Choice 1 - Bubble Sort\nChoice 2 - Merge Sort\nChoice 3 - Quick Sort\nEnter Your Choice : ");
    scanf("%d",&m);
    switch(m){ //Implementing Switch Case
        case 1 :{ //Case 1 For Bubble Sort
        bubblesort(a,n);
        for (int i=0; i<n ; i++) {
        printf("%d ",a[i]);}}
        break;

        case 2:{   //Case 2 For Merge Sort
        int low=0, high=n-1;
        MergeSort(a,low,high);
        for (int i=0; i<n ; i++) {
        printf("%d ",a[i]);}}
        break;
        
        
        case 3:{   //Case 3 For Quick Sort
        QuickSort(a,0,n-1);
        for (int i=0; i<n ; i++) {
        printf("%d ",a[i]);}}
        break;
        
        default :
        printf("Enter A Valid Choice");
        break;
    }
}
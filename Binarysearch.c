#include <stdio.h>

// Function to perform binary search
int Binarysearch(int a[], int n, int data) {
    int l = 0;
    int h = n - 1;

    while (l <= h) {
        int mid = (l + h) / 2;

        // Check if data is present at mid
        if (a[mid] == data) {
            return mid; // Return the index
        }

        // If data is greater, ignore the left half
        if (a[mid] < data) {
            l = mid + 1;
        }
        // If data is smaller, ignore the right half
        else {
            h = mid - 1;
        }
    }

    // Data is not present in the array
    return -1;
}

int main() {
    int n, data;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    // Input the elements of the array
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input the data to be searched
    printf("Enter the data to be searched: ");
    scanf("%d", &data);

    // Perform binary search
    int result = Binarysearch(a, n, data);

    // Output the result
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

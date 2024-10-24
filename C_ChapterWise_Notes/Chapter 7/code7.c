
// question 1

#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = arr; // Pointer pointing to the first element of the array

    // Verify using pointer arithmetic that (ptr + 2) points to the third element
    printf("Value at *(ptr + 2): %d\n", *(ptr + 2));

    return 0;
}


// question 2

// output: it depends


// question 3

#include <stdio.h>

void fillMultiplicationTable(int arr[], int s) {
    for (int i = 0; i < 10; i++) {
        arr[i] = s * (i + 1); // Store s times (i + 1) in the array
    }
}

int main() {
    int s;
    int multiplicationTable[10];

    // Input the value of s from the user
    printf("Enter the number to generate its multiplication table: ");
    scanf("%d", &s);

    // Fill the array with the multiplication table of s
    fillMultiplicationTable(multiplicationTable, s);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", s);
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", s, i + 1, multiplicationTable[i]);
    }

    return 0;
}


// question 4

#include <stdio.h>

void fillMultiplicationTable(int arr[], int s) {
    for (int i = 0; i < 10; i++) {
        arr[i] = s * (i + 1); // Store s times (i + 1) in the array
    }
}

int main() {
    int s;
    int multiplicationTable[10];

    // Input the value of s from the user
    printf("Enter a number: ");
    scanf("%d", &s);

    // Fill the array with the multiplication table of s
    fillMultiplicationTable(multiplicationTable, s);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", s);
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", s, i + 1, multiplicationTable[i]);
    }

    return 0;
}


// question 5

#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start and end indices towards the center
        start++;
        end--;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array
    reverseArray(arr, size);

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// question 6

#include <stdio.h>

int countPositiveIntegers(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to count positive integers
    int positiveCount = countPositiveIntegers(arr, size);

    // Print the count of positive integers
    printf("Number of positive integers: %d\n", positiveCount);

    return 0;
}


// question 7

#include <stdio.h>

int main() {
    // Define a 2D array to store multiplication tables
    int tables[3][10];

    // Fill the array with multiplication tables
    for (int i = 0; i < 3; i++) {
        int num = (i == 0) ? 2 : ((i == 1) ? 7 : 9); // Determine the number
        for (int j = 0; j < 10; j++) {
            tables[i][j] = num * (j + 1); // Store the multiplication result
        }
    }

    // Print the multiplication tables
    for (int i = 0; i < 3; i++) {
        int num = (i == 0) ? 2 : ((i == 1) ? 7 : 9); // Determine the number
        printf("Multiplication table of %d:\n", num);
        for (int j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", num, j + 1, tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// question 8

#include <stdio.h>

int main() {
    int num;
    
    // Prompt the user to enter a number
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    // Define a 2D array to store multiplication table
    int table[3][10];

    // Fill the array with multiplication table
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            table[i][j] = num * (j + 1); // Store the multiplication result
        }
    }

    // Print the multiplication table
    printf("Multiplication table of %d:\n", num);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", num, j + 1, table[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// question 9

#include <stdio.h>

int main() {
    int arr[3][3][3]; // Define a 3D array

    // Print the addresses of array elements in increasing order
    printf("Addresses of array elements in increasing order:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("arr[%d][%d][%d]: %p\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}

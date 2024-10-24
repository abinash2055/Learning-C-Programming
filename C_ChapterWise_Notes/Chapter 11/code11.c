// question 1

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to int (integer array)
    int *array;

    // Dynamically allocate memory for the array of size 6
    array = (int *)malloc(6 * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error
    }

    // Input values into the array
    printf("Enter 6 integers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &array[i]);
    }

    // Display the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(array);

    return 0;
}


// question 2

#include <stdio.h>

int main() {
    // Declare an array to store 6 integers
    int array[6];

    // Input values into the array
    printf("Enter 6 integers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &array[i]);
    }

    // Display the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


// question 3

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to int (integer array)
    int *array;

    // Dynamically allocate memory for the array of size 6 using calloc
    array = (int *)calloc(6, sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error
    }

    // Input values into the array
    printf("Enter 6 integers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &array[i]);
    }

    // Display the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(array);

    return 0;
}


// question 4

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to int (integer array)
    int *array;

    // Dynamically allocate memory for the array of size 5
    array = (int *)malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error
    }

    // Input values into the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    // Display the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Reallocate memory for the array to store 10 integers
    array = (int *)realloc(array, 10 * sizeof(int));
    if (array == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Exit the program with an error
    }

    // Input values into the additional positions of the array
    printf("Enter additional 5 integers:\n");
    for (int i = 5; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    // Display the elements of the resized array
    printf("Resized array elements are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(array);

    return 0;
}


// question 5

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to int (integer array)
    int *multiplicationTable;
    int tableSize = 0;

    // Dynamically allocate memory for the array to store multiplication table of 7
    multiplicationTable = (int *)malloc(10 * sizeof(int));
    if (multiplicationTable == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error
    }

    // Generate multiplication table of 7 and store it in the array
    for (int i = 1; i <= 10; i++) {
        multiplicationTable[tableSize++] = 7 * i;
    }

    // Display the elements of the multiplication table of 7
    printf("Multiplication table of 7:\n");
    for (int i = 0; i < tableSize; i++) {
        printf("%d ", multiplicationTable[i]);
    }
    printf("\n");

    // Resize the array to store 15 numbers
    multiplicationTable = (int *)realloc(multiplicationTable, 15 * sizeof(int));
    if (multiplicationTable == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Exit the program with an error
    }

    // Generate multiplication tables of 8, 9, and 10 and store them in the array
    for (int i = 11; i <= 15; i++) {
        multiplicationTable[tableSize++] = 7 * i;
    }

    // Display the elements of the resized array
    printf("Resized array elements are:\n");
    for (int i = 0; i < tableSize; i++) {
        printf("%d ", multiplicationTable[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(multiplicationTable);

    return 0;
}


// question 6

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to int (integer array)
    int *array;

    // Dynamically allocate memory for the array of size 5 using calloc
    array = (int *)calloc(5, sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error
    }

    // Input values into the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    // Display the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Reallocate memory for the array to store 10 integers
    array = (int *)realloc(array, 10 * sizeof(int));
    if (array == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Exit the program with an error
    }

    // Input values into the additional positions of the array
    printf("Enter additional 5 integers:\n");
    for (int i = 5; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    // Display the elements of the resized array
    printf("Resized array elements are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(array);

    return 0;
}


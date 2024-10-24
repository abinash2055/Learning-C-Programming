
// question 1
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num; // Pointer to store the address of num

    // Print the address of the variable
    printf("Address of num: %p\n", (void *)&num);

    // Print the value of the variable using its address
    printf("Value of num using its address: %d\n", *ptr);

    return 0;
}


// question 2

#include <stdio.h>

void printAddress(int num) {
    printf("Address of num inside function: %p\n", (void *)&num);
}

int main() {
    int i = 42;

    // Print the address of i
    printf("Address of i: %p\n", (void *)&i);

    // Pass i to the function and print its address inside the function
    printAddress(i);

    return 0;
}

// output:
// Address of i: 0x7ffee0efb9f4
// Address of num inside function: 0x7ffee0efb9d4


// question 3

#include <stdio.h>

void calculateTenTimes(int *num) {
    *num *= 10; // Multiply the value by 10
}

int main() {
    int i = 5;

    // Print the current value of i
    printf("Before calculation: i = %d\n", i);

    // Call the function to calculate ten times the value of i
    calculateTenTimes(&i);

    // Print the updated value of i
    printf("After calculation: i = %d\n", i);

    return 0;
}


// question 4

#include <stdio.h>

void calculateSumAndAverage(int arr[], int n, int *sum, float *average) {
    *sum = 0;
    for (int i = 0; i < n; i++) {
        *sum += arr[i];
    }
    *average = (float)*sum / n;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    float average;

    // Call the function to calculate sum and average
    calculateSumAndAverage(arr, n, &sum, &average);

    // Print the sum and average
    printf("Sum of the array elements: %d\n", sum);
    printf("Average of the array elements: %.2f\n", average);

    return 0;
}


// question 5

#include <stdio.h>

int main() {
    int i = 42;
    int *ptr = &i; // Pointer to i
    int **ptr_to_ptr = &ptr; // Pointer to pointer to i

    // Print the value of i using pointer to pointer
    printf("Value of i using pointer to pointer: %d\n", **ptr_to_ptr);

    return 0;
}


// question 6

#include <stdio.h>

void calculateTenTimes(int num) {
    num *= 10; // Multiply the value by 10
}

int main() {
    int i = 5;

    // Print the current value of i
    printf("Before calculation: i = %d\n", i);

    // Call the function to calculate ten times the value of i (by value)
    calculateTenTimes(i);

    // Print the updated value of i
    printf("After calculation: i = %d\n", i);

    return 0;
}

// output
// value is unchanged
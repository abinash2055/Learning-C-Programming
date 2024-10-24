// question 1

#include <stdio.h>

// Define a structure to represent a 2D vector
struct Vector2D {
    float x;
    float y;
};

int main() {
    // Create a 2D vector
    struct Vector2D vec;

    // Input the values for the vector components from the user
    printf("Enter the x-component of the vector: ");
    scanf("%f", &vec.x);
    printf("Enter the y-component of the vector: ");
    scanf("%f", &vec.y);

    // Print the components of the vector
    printf("The 2D vector is: (%.2f, %.2f)\n", vec.x, vec.y);

    return 0;
}


// question 2

#include <stdio.h>

// Define a structure to represent a 2D vector
struct Vector2D {
    float x;
    float y;
};

// Function to compute the sum of two 2D vectors
struct Vector2D sumVector(struct Vector2D vec1, struct Vector2D vec2) {
    struct Vector2D result;

    // Compute the sum of x-components and y-components separately
    result.x = vec1.x + vec2.x;
    result.y = vec1.y + vec2.y;

    return result;
}

int main() {
    struct Vector2D vec1, vec2, sum;

    // Input the components of the first vector
    printf("Enter the x-component of the first vector: ");
    scanf("%f", &vec1.x);
    printf("Enter the y-component of the first vector: ");
    scanf("%f", &vec1.y);

    // Input the components of the second vector
    printf("Enter the x-component of the second vector: ");
    scanf("%f", &vec2.x);
    printf("Enter the y-component of the second vector: ");
    scanf("%f", &vec2.y);

    // Compute the sum of the two vectors
    sum = sumVector(vec1, vec2);

    // Print the result
    printf("The sum of the two vectors is: (%.2f, %.2f)\n", sum.x, sum.y);

    return 0;
}


// question 3

// Considering these points, if the twenty integers are of the same type and there is no need for 
// additional information associated with each integer, using an array would be a more straightforward 
// and efficient choice. However, if there is a need to associate additional information with each integer 
// or if the data is heterogeneous, a structure may be more appropriate.


// question 4

#include <stdio.h>
#include <stdlib.h>

// Define a structure representing a student
struct Student {
    char name[50];
    int age;
};

int main() {
    // Allocate memory for a student structure
    struct Student *ptr = (struct Student*) malloc(sizeof(struct Student));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program
    }

    // Access structure members using the arrow operator
    printf("Enter student name: ");
    scanf("%s", ptr->name); // Equivalent to (*ptr).name
    printf("Enter student age: ");
    scanf("%d", &ptr->age); // Equivalent to (*ptr).age

    // Print the details of the student
    printf("Student name: %s\n", ptr->name);
    printf("Student age: %d\n", ptr->age);

    // Free allocated memory
    free(ptr);

    return 0;
}


// question 5

#include <stdio.h>

// Define a structure representing a complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex result;

    // Perform addition of real and imaginary parts separately
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    return result;
}

// Function to subtract two complex numbers
struct Complex subtract(struct Complex num1, struct Complex num2) {
    struct Complex result;

    // Perform subtraction of real and imaginary parts separately
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;

    return result;
}

int main() {
    struct Complex num1, num2, sum, diff;

    // Input the real and imaginary parts of the first complex number
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input the real and imaginary parts of the second complex number
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Perform addition and subtraction of complex numbers
    sum = add(num1, num2);
    diff = subtract(num1, num2);

    // Print the results
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}


// question 6

#include <stdio.h>

// Define a structure representing a complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex result;

    // Perform addition of real and imaginary parts separately
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    return result;
}

// Function to subtract two complex numbers
struct Complex subtract(struct Complex num1, struct Complex num2) {
    struct Complex result;

    // Perform subtraction of real and imaginary parts separately
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;

    return result;
}

// Function to display a complex number
void displayComplex(struct Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imag);
}

int main() {
    struct Complex nums[5];

    // Input the values for the complex numbers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter real and imaginary parts of complex number %d: ", i + 1);
        scanf("%f %f", &nums[i].real, &nums[i].imag);
    }

    // Display the complex numbers
    printf("Complex numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Complex number %d: ", i + 1);
        displayComplex(nums[i]);
    }

    return 0;
}


// question 7

#include <stdio.h>

// Define a structure representing a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex add(Complex num1, Complex num2) {
    Complex result;

    // Perform addition of real and imaginary parts separately
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex num1, Complex num2) {
    Complex result;

    // Perform subtraction of real and imaginary parts separately
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;

    return result;
}

int main() {
    Complex num1, num2, sum, diff;

    // Input the real and imaginary parts of the first complex number
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input the real and imaginary parts of the second complex number
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Perform addition and subtraction of complex numbers
    sum = add(num1, num2);
    diff = subtract(num1, num2);

    // Print the results
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}


// question 8

#include <stdio.h>

// Define a structure representing a bank account
typedef struct {
    char name[50];
    int accountNumber;
    float balance;
} BankAccount;

// output:

// Using a structure allows us to group related information about a bank account into a single unit, 
// making it easier to manage and manipulate account data. The typedef keyword is used to define a custom 
// type BankAccount, which can be used to declare variables of type BankAccount.


// question 9

#include <stdio.h>

// Define a structure representing a date
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function to compare two dates
int compareDates(Date date1, Date date2) {
    // Compare years
    if (date1.year < date2.year)
        return -1;
    else if (date1.year > date2.year)
        return 1;

    // If years are equal, compare months
    if (date1.month < date2.month)
        return -1;
    else if (date1.month > date2.month)
        return 1;

    // If months are equal, compare days
    if (date1.day < date2.day)
        return -1;
    else if (date1.day > date2.day)
        return 1;

    // If all components are equal, return 0
    return 0;
}

int main() {
    Date date1, date2;

    // Input the first date from the user
    printf("Enter date 1 (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input the second date from the user
    printf("Enter date 2 (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the dates
    int result = compareDates(date1, date2);

    // Print the comparison result
    if (result < 0)
        printf("Date 1 comes before Date 2.\n");
    else if (result > 0)
        printf("Date 1 comes after Date 2.\n");
    else
        printf("Date 1 and Date 2 are the same.\n");

    return 0;
}


// question 10

#include <stdio.h>

// Define a structure representing a date
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function to compare two dates
int compareDates(Date date1, Date date2) {
    // Compare years
    if (date1.year < date2.year)
        return -1;
    else if (date1.year > date2.year)
        return 1;

    // If years are equal, compare months
    if (date1.month < date2.month)
        return -1;
    else if (date1.month > date2.month)
        return 1;

    // If months are equal, compare days
    if (date1.day < date2.day)
        return -1;
    else if (date1.day > date2.day)
        return 1;

    // If all components are equal, return 0
    return 0;
}

int main() {
    // Define variables of type Date
    Date date1, date2;

    // Input the first date from the user
    printf("Enter date 1 (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input the second date from the user
    printf("Enter date 2 (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the dates
    int result = compareDates(date1, date2);

    // Print the comparison result
    if (result < 0)
        printf("Date 1 comes before Date 2.\n");
    else if (result > 0)
        printf("Date 1 comes after Date 2.\n");
    else
        printf("Date 1 and Date 2 are the same.\n");

    return 0;
}

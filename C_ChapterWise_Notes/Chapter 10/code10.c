
// question 1

#include <stdio.h>

int main() {
    FILE *file;
    int num1, num2, num3;

    // Open the file for reading
    file = fopen("input.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1; // Exit the program with an error
    }

    // Read three integers from the file
    if (fscanf(file, "%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Failed to read three integers from the file.\n");
        fclose(file); // Close the file
        return 1; // Exit the program with an error
    }

    // Close the file
    fclose(file);

    // Display the read integers
    printf("The three integers read from the file are: %d, %d, %d\n", num1, num2, num3);

    return 0;
}


// question 2

#include <stdio.h>

void generateMultiplicationTable(int number, FILE *file) {
    fprintf(file, "Multiplication Table of %d:\n", number);
    fprintf(file, "-----------------------------\n");
    for (int i = 1; i <= 10; i++) {
        fprintf(file, "%d x %d = %d\n", number, i, number * i);
    }
    fprintf(file, "-----------------------------\n");
}

int main() {
    int number;

    // Open the file for writing
    FILE *file = fopen("multiplication_table.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file for writing.\n");
        return 1; // Exit the program with an error
    }

    // Input the number from the user
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &number);

    // Generate the multiplication table and write it to the file
    generateMultiplicationTable(number, file);

    // Close the file
    fclose(file);

    printf("Multiplication table has been written to multiplication_table.txt.\n");

    return 0;
}


// question 3

#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char character;

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return 1; // Exit the program with an error
    }

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Failed to open the output file.\n");
        fclose(inputFile); // Close the input file
        return 1; // Exit the program with an error
    }

    // Read characters from the input file and write them twice to the output file
    while ((character = fgetc(inputFile)) != EOF) {
        fputc(character, outputFile);
        fputc(character, outputFile);
    }

    // Close the input and output files
    fclose(inputFile);
    fclose(outputFile);

    printf("Content of input.txt has been written twice to output.txt.\n");

    return 0;
}


// question 4

#include <stdio.h>

int main() {
    char name1[50], name2[50];
    int salary1, salary2;

    // Input details of first employee
    printf("Enter name of first employee: ");
    scanf("%s", name1);
    printf("Enter salary of first employee: ");
    scanf("%d", &salary1);

    // Input details of second employee
    printf("Enter name of second employee: ");
    scanf("%s", name2);
    printf("Enter salary of second employee: ");
    scanf("%d", &salary2);

    // Open the file for writing
    FILE *file = fopen("employee_details.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file for writing.\n");
        return 1; // Exit the program with an error
    }

    // Write employee details to the file
    fprintf(file, "%s, %d\n", name1, salary1);
    fprintf(file, "%s, %d\n", name2, salary2);

    // Close the file
    fclose(file);

    printf("Employee details have been written to employee_details.txt.\n");

    return 0;
}


// question 5

#include <stdio.h>

int main() {
    FILE *file;
    int value;

    // Open the file for reading and writing
    file = fopen("data.txt", "r+");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1; // Exit the program with an error
    }

    // Read the integer value from the file
    fscanf(file, "%d", &value);

    // Double the value
    value *= 2;

    // Move the file pointer to the beginning of the file
    rewind(file);

    // Write the doubled value back to the file
    fprintf(file, "%d", value);

    // Close the file
    fclose(file);

    printf("The value in data.txt has been doubled.\n");

    return 0;
}

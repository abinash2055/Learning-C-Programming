
// question 1

int a = 10;
if (a=11)
    printf("i am 11");
else 
    printf("i am not 11");

// output
// here value of a changes from 10 to 11 thus 
// it print I am 11


// questioin 2

#include <stdio.h>

int main() {
    float subject1, subject2, subject3, total_marks, percentage;

    // Input marks for three subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);

    // Calculate total marks
    total_marks = subject1 + subject2 + subject3;

    // Calculate percentage
    percentage = (total_marks / 300) * 100;

    // Check if the student passes
    if (percentage >= 40 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33) {
        printf("Congratulations! You passed with %.2f%%\n", percentage);
    } else {
        printf("Sorry, you did not pass.\n");
    }

    return 0;
}


// question 3

#include <stdio.h>

int main() {
    float sales, tax;

    // Input sales amount
    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    // Calculate tax based on income slabs
    if (sales <= 250000) {
        tax = 0; // No tax for income <= 2.5 lakh
    } else if (sales <= 1000000) {
        tax = 0.20 * (sales - 250000); // 20% tax for income > 2.5 lakh and <= 10 lakh
    } else {
        tax = 0.30 * (sales - 1000000) + 0.20 * (1000000 - 250000); // 30% tax for income > 10 lakh
    }

    // Display the income tax paid
    printf("Income tax paid: %.2f\n", tax);

    return 0;
}


// question 4

#include <stdio.h>

int main() {
    int year;

    // Input year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


// question 5

#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } else {
        printf("%c is not a lowercase letter.\n", ch);
    }

    return 0;
}


// question 6

#include <stdio.h>

int main() {
    float num1, num2, num3, num4, max;

    // Input four numbers from the user
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    // Assume the first number is the maximum
    max = num1;

    // Compare with the remaining numbers
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }

    // Display the greatest number
    printf("The greatest number is: %.2f\n", max);

    return 0;
}

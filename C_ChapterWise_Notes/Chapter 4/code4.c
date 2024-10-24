
// question 1

#include <stdio.h>

int main() {
    int n, i;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the multiplication table of n
    printf("Multiplication table of %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}


// question 2

#include <stdio.h>

int main() {
    int i;

    // Print the multiplication table of 10 in reverse order
    printf("Multiplication table of 10 in reverse order:\n");
    for (i = 10; i >= 1; i--) {
        printf("10 * %d = %d\n", i, 10 * i);
    }

    return 0;
}


// question 3

// a. at least once
#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("You entered a positive number: %d\n", num);

    return 0;
}

// b. at least twice
#include <stdio.h>

int main() {
    int count = 0;

    do {
        printf("This loop has executed %d times.\n", ++count);
    } while (count < 2);

    return 0;
}

// c. at most once
#include <stdio.h>

int main() {
    int num = 5;

    do {
        printf("This loop will execute at most once.\n");
    } while (num > 10);

    return 0;
}


// question 4

// true
// for, while and do-while


//  question 5

#include <stdio.h>

int main() {
    int num = 1, sum = 0, count = 0;

    // Sum the first ten natural numbers using a while loop
    while (count < 10) {
        sum += num;
        num++;
        count++;
    }

    // Display the sum
    printf("The sum of the first ten natural numbers is: %d\n", sum);

    return 0;
}


// question 6

// a. for loop 
#include <stdio.h>

int main() {
    int sum = 0;

    // Sum the first ten natural numbers using a for loop
    for (int num = 1; num <= 10; num++) {
        sum += num;
    }

    // Display the sum
    printf("The sum of the first ten natural numbers is: %d\n", sum);

    return 0;
}

// b. do-while loop
#include <stdio.h>

int main() {
    int num = 1, sum = 0, count = 0;

    // Sum the first ten natural numbers using a do-while loop
    do {
        sum += num;
        num++;
        count++;
    } while (count < 10);

    // Display the sum
    printf("The sum of the first ten natural numbers is: %d\n", sum);

    return 0;
}


// question 7

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Calculate the sum of numbers in the multiplication table of 8
    for (int i = 1; i <= 10; i++) {
        num = 8 * i;
        sum += num;
    }

    // Display the sum
    printf("The sum of numbers occurring in the multiplication table of 8 is: %d\n", sum);

    return 0;
}


// question 8

#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate the factorial of the number
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // Display the factorial
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}


// question 9

#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate the factorial of the number using a while loop
        int i = 1;
        while (i <= num) {
            factorial *= i;
            i++;
        }

        // Display the factorial
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}


// question 10

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    // 0 and 1 are not prime numbers
    if (num <= 1) {
        return false;
    }

    // Check if num is divisible by any number from 2 to num - 1
    int i = 2;
    do {
        if (num % i == 0) {
            return false; // If num is divisible by any number, it's not prime
        }
        i++;
    } while (i <= num / 2);

    return true; // If num is not divisible by any number, it's prime
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}



// question 11

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    // 0 and 1 are not prime numbers
    if (num <= 1) {
        return false;
    }

    // Check if num is divisible by any number from 2 to num - 1
    int i = 2;
    while (i <= num / 2) {
        if (num % i == 0) {
            return false; // If num is divisible by any number, it's not prime
        }
        i++;
    }

    return true; // If num is not divisible by any number, it's prime
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


// question 1

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


// question 2

#include <stdio.h>

float convertCelsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius from the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using the function
    fahrenheit = convertCelsiusToFahrenheit(celsius);

    // Display the converted temperature
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}


// question 3

#include <stdio.h>

float calculateForce(float mass, float gravity) {
    return mass * gravity;
}

int main() {
    float mass, gravity, force;

    // Assign the value of gravitational acceleration (g)
    gravity = 9.8;

    // Input mass of the body from the user
    printf("Enter mass of the body (in kg): ");
    scanf("%f", &mass);

    // Calculate force of attraction using the function
    force = calculateForce(mass, gravity);

    // Display the calculated force of attraction
    printf("The force of attraction exerted by Earth on the body is: %.2f Newton\n", force);

    return 0;
}


// question 4

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the nth Fibonacci number using recursion
    int result = fibonacci(n);

    // Display the result
    printf("The %dth element of the Fibonacci series is: %d\n", n, result);

    return 0;
}


// question 5
// if a =10 then first it prints a
// then it prints 11 and finally 11


// question 6

#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 natural numbers is 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursive case: add n to sum of (n-1) natural numbers
    }
}

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of first n natural numbers using recursion
    int sum = sumOfNaturalNumbers(n);

    // Display the sum
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}


// question 7

#include <stdio.h>

void printPattern(int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input the number of lines from the user
    printf("Enter the number of lines (odd): ");
    scanf("%d", &n);

    // Check if the number of lines is odd
    if (n % 2 == 0) {
        printf("Please enter an odd number of lines.\n");
        return 1;
    }

    // Print the pattern using the function
    printPattern(n);

    return 0;
}

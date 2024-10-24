// question 1

#include <stdio.h>

int main() {
    float length, width, area;

    // Input length of the rectangle
    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    // Input width of the rectangle
    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;

    // Display the result
    printf("Area of rectangle with length %.2f and width %.2f: %.2f\n", length, width, area);

    return 0;
}


// question 2

#include <stdio.h>

int main() {
    float radius, area;

    // Input radius of the circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = 3.14159 * radius * radius;

    // Display the result
    printf("Area of circle with radius %.2f: %.2f\n", radius, area);

    return 0;
}

// to modify same code for qusn no. 2 and print volume of cylindergiven its radius and height as input from user.

#include <stdio.h>

int main() {
    float radius, height, volume;

    // Input radius of the cylinder
    printf("Enter radius of cylinder: ");
    scanf("%f", &radius);

    // Input height of the cylinder
    printf("Enter height of cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = 3.14159 * radius * radius * height;

    // Display the result
    printf("Volume of cylinder with radius %.2f and height %.2f: %.2f\n", radius, height, volume);

    return 0;
}


// question 3
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}


// question 4
#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Input principal amount
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    // Input rate of interest
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    // Input time period in years
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple interest: %.2f\n", simple_interest);

    return 0;
}

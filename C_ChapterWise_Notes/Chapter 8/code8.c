
// question 1

// output: scanf()

// question 2

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    // Using %c specifier
    printf("Enter the first string using %%c specifier: ");
    while ((str1[i] = getchar()) != '\n' && i < 99) {
        i++;
    }
    str1[i] = '\0'; // Null-terminate the string

    // Clear input buffer
    while (getchar() != '\n');

    // Using %s specifier
    printf("Enter the second string using %%s specifier: ");
    scanf("%s", str2);

    // Compare the strings
    if (strcmp(str1, str2) == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}


// question 3

#include <stdio.h>

size_t my_strlen(const char *str) {
    size_t length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[] = "Hello, world!";
    printf("Length of '%s' using my_strlen: %zu\n", str, my_strlen(str));

    return 0;
}


// question 4

#include <stdio.h>
#include <string.h>

void slice(char str[], int m, int n) {
    int len = strlen(str);
    if (m < 0 || m >= len || n < 0 || n >= len || m > n) {
        printf("Invalid slice range.\n");
        return;
    }

    // Shift characters to the left to remove the sliced part
    for (int i = 0; i <= n - m; i++) {
        str[i] = str[m + i];
    }

    // Null-terminate the sliced string
    str[n - m + 1] = '\0';
}

int main() {
    char str[] = "Hello, world!";
    int m = 7, n = 11;

    printf("Original string: %s\n", str);
    printf("Slicing from position %d to %d...\n", m, n);
    slice(str, m, n);
    printf("Sliced string: %s\n", str);

    return 0;
}


// question 5

#include <stdio.h>

void my_strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0'; // Null-terminate the destination string
}

int main() {
    char src[] = "Hello, world!";
    char dest[20]; // Ensure destination buffer is large enough

    // Copy the source string to the destination
    my_strcpy(dest, src);

    // Print the copied string
    printf("Copied string: %s\n", dest);

    return 0;
}


// question 6

#include <stdio.h>

void encryptString(char *str) {
    while (*str != '\0') {
        *str = *str + 1; // Add 1 to ASCII value
        str++;
    }
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Encrypt the string
    encryptString(str);

    // Print the encrypted string
    printf("Encrypted string: %s\n", str);

    return 0;
}


// question 7

#include <stdio.h>

void decryptString(char *str) {
    while (*str != '\0') {
        *str = *str - 1; // Subtract 1 from ASCII value
        str++;
    }
}

int main() {
    char str[100];

    // Input the encrypted string from the user
    printf("Enter the encrypted string: ");
    fgets(str, sizeof(str), stdin);

    // Decrypt the string
    decryptString(str);

    // Print the decrypted string
    printf("Decrypted string: %s\n", str);

    return 0;
}


// question 8

#include <stdio.h>

int countOccurrences(char *str, char ch) {
    int count = 0;

    // Iterate through the string
    while (*str != '\0') {
        if (*str == ch) {
            count++; // Increment count if character matches
        }
        str++;
    }

    return count;
}

int main() {
    char str[100];
    char ch;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input the character to count occurrences
    printf("Enter the character to count occurrences: ");
    scanf("%c", &ch);

    // Count occurrences of the character in the string
    int occurrences = countOccurrences(str, ch);

    // Print the number of occurrences
    printf("Occurrences of '%c' in the string: %d\n", ch, occurrences);

    return 0;
}


// question 9

#include <stdio.h>

int isCharacterPresent(char *str, char ch) {
    // Iterate through the string
    while (*str != '\0') {
        if (*str == ch) {
            return 1; // Return 1 if character is found
        }
        str++;
    }

    return 0; // Return 0 if character is not found
}

int main() {
    char str[100];
    char ch;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input the character to check presence
    printf("Enter the character to check presence: ");
    scanf("%c", &ch);

    // Check if character is present in the string
    if (isCharacterPresent(str, ch)) {
        printf("Character '%c' is present in the string.\n", ch);
    } else {
        printf("Character '%c' is not present in the string.\n", ch);
    }

    return 0;
}

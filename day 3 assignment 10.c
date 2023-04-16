#include <stdio.h>

// Function to reverse a string
void reverseString(char *str) {
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter any String :: ");
    scanf("%s", str);

    printf("The Original String is :: %s\n", str);
    reverseString(str);

    printf("The Reverse of the String is :: %s\n", str);

    return 0;
}

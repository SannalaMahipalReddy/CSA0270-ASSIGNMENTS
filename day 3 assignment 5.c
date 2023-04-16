#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = '\0'; 

    int freq[256] = {0}; 
    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }

    char maxChar = ' ';
    int maxFreq = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Max repeated character in the string: %c\n", maxChar);
    printf("It occurs %d times\n", maxFreq);

    return 0;
}

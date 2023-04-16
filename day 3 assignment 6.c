#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool areAnagrams(char str1[], char str2[]) {
    // Get the lengths of the strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, they are not anagrams
    if (len1 != len2) {
        return false;
    }

    // Arrays to store character counts
    int count1[26] = {0};
    int count2[26] = {0};

    // Loop through both strings and count the occurrences of each character
    for (int i = 0; i < len1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }

    // Compare the character counts
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    if (areAnagrams(str1, str2)) {
        printf("%s and %s are anagrams.\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }

    return 0;
}

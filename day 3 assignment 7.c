#include <stdio.h>

int main() {
    char str[1000]; 
    int sum = 0;
    printf("Enter the string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        sum += (int)str[i]; 
     
    }

    printf("Sum of all characters: %d\n", sum);

    return 0;
}

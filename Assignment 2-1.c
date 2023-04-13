#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    int max = 0, num = 0, len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            if (num > max) {
                max = num;
            }
            num = 0;
        }
    }
    if (num > max) {
        max = num;
    }
    printf("The largest number in the string is: %d\n", max);
    return 0;
}

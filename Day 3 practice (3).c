#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n, num, i, maximum, minimum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    scanf("%d", &num);
    maximum = minimum = num; 

    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        maximum = max(maximum, num);
        minimum = min(minimum, num);
    }

    printf("Maximum number is: %d\n", maximum);
    printf("Minimum number is: %d\n", minimum);

    return 0;
}

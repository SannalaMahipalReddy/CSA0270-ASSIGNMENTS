#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void displayPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int start, end;
    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);
    displayPrimes(start, end);
    return 0;
}

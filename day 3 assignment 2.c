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

bool checkSumOfTwoPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (checkSumOfTwoPrimes(num)) {
        printf("%d can be expressed as the sum of two prime numbers.", num);
    } else {
        printf("%d cannot be expressed as the sum of two prime numbers.", num);
    }

    return 0;
}

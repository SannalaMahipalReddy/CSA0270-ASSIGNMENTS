#include <stdio.h>

int minJumps(int arr[], int n) {
    if (n == 0 || arr[0] == 0) {
        return -1;
    }

    int jumps[n];
    jumps[0] = 0;

    for (int i = 1; i < n; i++) {
        jumps[i] = __INT_MAX__;
        for (int j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != __INT_MAX__) {
                jumps[i] = jumps[j] + 1;
                break;
            }
        }
    }

    return (jumps[n - 1] != __INT_MAX__) ? jumps[n - 1] : -1;
}

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min_jumps = minJumps(arr, n);
    printf("Minimum number of jumps required to reach the end: %d", min_jumps);
    return 0;
}

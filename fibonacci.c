#include <stdio.h>

void generateFibonacci(int n) {
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    int fib[n];
    fib[0] = 0;
    if (n > 1) {
        fib[1] = 1;
    }

    printf("Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        if (i > 1) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("%d\n", fib[i]);
    }
}

int main() {
    int number;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &number);

    generateFibonacci(number);

    return 0;
}
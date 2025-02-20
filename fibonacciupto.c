#include <stdio.h>

void generateFibonacci(int n) {
    int a = 0, b = 1;

    printf("Fibonacci sequence up to %d:\n", n);
    if (n >= 0) {
        printf("%d\n", a);
    }

    while (b <= n) {
        printf("%d\n", b);
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int number;
    printf("Enter the maximum number for the Fibonacci sequence: ");
    scanf("%d", &number);
    generateFibonacci(number);

    return 0;
}
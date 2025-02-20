#include <stdio.h>

int main() {
    int number, accum = 1;
    printf("Enter the integer: ");
    scanf("%d", &number);
    for (int i = number; i != 0; i = i - 1) {
        accum *= i;
    }
    printf("factorial: %d\n", accum);
    return 0;
}
void swap_nums(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 3, b = 4;
    swap_nums(&a, &b);
    printf("a and b values: %d, %d\n", a, b);
    return 0;
}

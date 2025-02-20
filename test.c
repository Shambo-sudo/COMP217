#include <stdio.h>
#include <string.h>


int main() {
    char source[] = "Kreauniv";
    char target[20];
    strcpy(target, source);
    printf("%s\n", target);
    return 0;
}
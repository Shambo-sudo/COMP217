#include <stdio.h>

int x = 1;
int *p = &x;
int **pp = &p;
char y = 'a';
char *q = &y;
char **qq = &q;

int main() {
    printf("pp: %p\n", (void*)pp);
    printf("pp+1: %p\n", (void*)(pp+1));
    printf("qq: %p\n", (void*)qq);
    printf("qq+1: %p\n", (void*)(qq+1));
    return 0;
}

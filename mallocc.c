#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *strings[5];
    char buffer[100];
    for (int i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(buffer, 100, stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove newline character
        strings[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(strings[i], buffer);
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]); // Free allocated memory
    }

    return 0;
}

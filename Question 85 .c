// Reverse a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') {
        len++;
    }
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Reversed string: ");
    for (j = len - 1; j >= 0; j--) {
        printf("%c", str[j]);
    }
    printf("\n");

    return 0;
}

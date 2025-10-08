// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char *words[10];
    int count = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[strlen(name) - 1] == '\n')
        name[strlen(name) - 1] = '\0';

    char *token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c. ", toupper(words[i][0]));
    }

    printf("%s\n", words[count - 1]);

    return 0;
}

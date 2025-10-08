// Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[strlen(name) - 1] == '\n')
        name[strlen(name) - 1] = '\0';

    printf("Initials: ");

    if (isalpha(name[0]))
        printf("%c. ", toupper(name[0]));

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i]))
            printf("%c. ", toupper(name[i]));
    }

    printf("\n");
    return 0;
}

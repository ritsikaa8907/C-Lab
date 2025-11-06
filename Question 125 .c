// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[500];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    printf("Enter a line of text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fputs(text, file);

    printf("Text appended successfully to %s\n", filename);

    fclose(file);

    return 0;
}

// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(inFile);
        return 1;
    }

    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    printf("Text converted to uppercase and saved to output.txt\n");

    fclose(inFile);
    fclose(outFile);

    return 0;
}

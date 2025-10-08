// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);
    if (sentence[len - 1] == '\n')
        sentence[len - 1] = '\0';

    int start = 0, end = 0;
    while (sentence[end] != '\0') {
        if (sentence[end] == ' ') {
            reverse(sentence, start, end - 1);
            start = end + 1;
        }
        end++;
    }
    reverse(sentence, start, end - 1);  

    printf("Reversed words: %s\n", sentence);
    return 0;
}

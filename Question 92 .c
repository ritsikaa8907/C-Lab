// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            if (freq[c - 'a'] == 1) {
                printf("First repeating lowercase letter: %c\n", c);
                return 0;
            }
            freq[c - 'a']++;
        }
    }

    printf("No repeating lowercase letter found.\n");
    return 0;
}

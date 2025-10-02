// Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j, len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') {
        len++;
    }
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

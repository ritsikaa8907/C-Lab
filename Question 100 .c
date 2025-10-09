// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    int len = strlen(str);

    printf("All substrings are:\n");

    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

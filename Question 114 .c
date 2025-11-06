// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int seen[256] = {0};  
        int currentLen = 0;

        for (int j = i; j < n; j++) {
            if (seen[(int)s[j]] == 1) {
                break; 
            } else {
                seen[(int)s[j]] = 1;
                currentLen++;
            }
        }

        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}

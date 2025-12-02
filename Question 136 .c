// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

int main() {
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
    enum Menu choice = MULTIPLY;

    int a = 5, b = 3;

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

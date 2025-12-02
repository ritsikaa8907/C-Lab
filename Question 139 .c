// Show that enums store integers by printing assigned values.
#include <stdio.h>

int main() {
    enum Color { RED = 5, GREEN = 10, BLUE = 15 };

    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);

    return 0;
}

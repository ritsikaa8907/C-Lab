// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status state = TIMEOUT;

    if (state == SUCCESS)
        printf("Operation succeeded\n");
    else if (state == FAILURE)
        printf("Operation failed\n");
    else
        printf("Operation timed out\n");

    return 0;
}

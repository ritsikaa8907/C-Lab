// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[11]; 

    printf("Enter a date in dd/04/yyyy format: ");
    scanf("%10s", date);

    char day[3];
    char month[3];
    char year[5];

    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    if (strcmp(month, "04") == 0) {
        printf("Formatted date: %s-Apr-%s\n", day, year);
    } else {
        printf("This program only supports April (04) as input month.\n");
    }

    return 0;
}

// Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee e = { "John", 101, 50000.0, {15, 6, 2023} };

    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%d\n", e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}

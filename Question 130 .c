// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *file;
    int n, i, roll;
    char name[50];
    float marks;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}

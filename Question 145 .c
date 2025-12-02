// Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student topStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks)
            maxIndex = i;
    }
    return students[maxIndex];
}

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%49s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    struct Student top = topStudent(students, 5);
    printf("\nTop Student:\nName: %s, Roll No: %d, Marks: %.2f\n", top.name, top.roll_no, top.marks);

    return 0;
}

// Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

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

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[maxIndex].marks)
            maxIndex = i;
    }

    printf("\nTop Student:\n");
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[maxIndex].name, students[maxIndex].roll_no, students[maxIndex].marks);

    return 0;
}

// Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    s->roll_no = 101;
    s->marks = 95.5;
    scanf("%49s", s->name);

    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    free(s);
    return 0;
}

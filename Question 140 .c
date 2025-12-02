// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

int main() {
    enum Gender { MALE, FEMALE, OTHER };

    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p1 = { "Alice", FEMALE };

    if (p1.gender == MALE)
        printf("%s is Male\n", p1.name);
    else if (p1.gender == FEMALE)
        printf("%s is Female\n", p1.name);
    else
        printf("%s is Other\n", p1.name);

    return 0;
}

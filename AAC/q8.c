#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[30];
    float marks;
};

union Data {
    int i;
    float f;
    char text[20];
};

int main() {
    struct Student s = {101, "Rahul", 85.5};

    printf("Structure:\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    union Data d;

    d.i = 100;
    printf("\nUnion integer: %d\n", d.i);

    d.f = 45.6;
    printf("Union float: %.2f\n", d.f);

    strcpy(d.text, "Hello");
    printf("Union string: %s\n", d.text);

    return 0;
}
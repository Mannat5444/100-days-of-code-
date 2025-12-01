//Take two structs as input and check if they are identical//
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int isIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks)
        return 1; 
    else
        return 0; 
}

int main() {
    struct Student s1, s2;

    printf("Enter details for first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    printf("\nEnter details for second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    if (isIdentical(s1, s2))
        printf("\nBoth students are identical.\n");
    else
        printf("\nStudents are not identical.\n");

    return 0;
}

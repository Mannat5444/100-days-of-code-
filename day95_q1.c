//Return a structure containing top student's details from a function//
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return students[maxIndex];
}

int main() {
    struct Student students[5], topStudent;
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    topStudent = getTopStudent(students, 5);

    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}

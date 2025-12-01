//Store employee data in a binary file using fwrite() and read using fread()//
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee e[3]; 
    int i;
    FILE *fp;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Employee ID: ");
        scanf("%d", &e[i].emp_id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        printf("Joining Date (day month year): ");
        scanf("%d %d %d", &e[i].joiningDate.day, &e[i].joiningDate.month, &e[i].joiningDate.year);
    }

    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);
    printf("\nEmployee data saved to employees.dat\n");

    struct Employee readEmp[3];
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(readEmp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\n--- Employee Details from File ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", readEmp[i].name);
        printf("Employee ID: %d\n", readEmp[i].emp_id);
        printf("Salary: %.2f\n", readEmp[i].salary);
        printf("Joining Date: %02d-%02d-%04d\n", 
               readEmp[i].joiningDate.day, 
               readEmp[i].joiningDate.month, 
               readEmp[i].joiningDate.year);
    }

    return 0;
}

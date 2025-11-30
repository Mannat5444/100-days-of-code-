//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached//
#include <stdio.h>

int main() {
    FILE *fp;
    char data[200];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error! Unable to open file.\n");
        return 1;
    }

    printf("Reading contents of info.txt:\n\n");

    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);
    return 0;
}

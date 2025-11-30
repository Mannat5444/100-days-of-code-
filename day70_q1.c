//Write a program to take a string input. Change it to sentence case.//
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  

    int n = strlen(str);

    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; i < n; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Sentence Case: %s\n", str);

    return 0;
}

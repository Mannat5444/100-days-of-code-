//Print initials of a name with the surname displayed in full//
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    scanf("%[^\n]%*c", name);  

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c.", name[i]);
        } else if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c.", name[i+1]);
        }
    }

    // Print surname
    printf(" %s\n", &name[lastSpace + 1]);

    return 0;
}

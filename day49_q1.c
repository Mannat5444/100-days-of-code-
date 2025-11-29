//Print the initials of a name//
#include <stdio.h>

int main() {
    char name[200];
    int i;

    printf("Enter a full name: ");
    scanf("%[^\n]%*c", name);  

    printf("Initials: ");

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ') {
            printf("%c.", name[i+1]);
        }
    }

    printf("\n");
    return 0;
}

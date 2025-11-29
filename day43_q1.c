//Reverse a string//
#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    
    for (i = 0; str[i] != '\0'; i++);

    for (j = 0, i = i - 1; j < i; j++, i--) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

//Count spaces, digits, and special characters in a string//
#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0, i;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);  

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= 'a' && str[i] <= 'z'))
            continue; 
        else
            special++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}


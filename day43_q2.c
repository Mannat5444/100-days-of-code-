//Check if a string is a palindrome//
#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);  

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}

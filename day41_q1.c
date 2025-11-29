//Count characters in a string without using built-in length functions//
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);   

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}

//Check if one string is a rotation of another//
#include <stdio.h>

int main() {
    char str1[200], str2[200], temp[400];
    int i, j, len1 = 0, len2 = 0, k = 0, found = 0;

    printf("Enter first string: ");
    scanf("%[^\n]%*c", str1);

    printf("Enter second string: ");
    scanf("%[^\n]%*c", str2);

    for (i = 0; str1[i] != '\0'; i++)
        len1++;
    for (i = 0; str2[i] != '\0'; i++)
        len2++;

    if (len1 != len2) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

    for (i = 0; i < len1; i++)
        temp[k++] = str1[i];
    for (i = 0; i < len1; i++)
        temp[k++] = str1[i];
    temp[k] = '\0';

    for (i = 0; i < 2 * len1; i++) {
        for (j = 0; j < len2 && temp[i + j] == str2[j]; j++);

        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}

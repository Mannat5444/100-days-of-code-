//Check if two strings are anagrams of each other//
#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, index, flag = 0;

    printf("Enter first string: ");
    scanf("%[^\n]%*c", str1);

    printf("Enter second string: ");
    scanf("%[^\n]%*c", str2);

    
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            index = str1[i] - 'A';
        else if (str1[i] >= 'a' && str1[i] <= 'z')
            index = str1[i] - 'a';
        else
            continue;  

        freq1[index]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            index = str2[i] - 'A';
        else if (str2[i] >= 'a' && str2[i] <= 'z')
            index = str2[i] - 'a';
        else
            continue;

        freq2[index]++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Strings are anagrams.\n");
    else
        printf("Strings are NOT anagrams.\n");

    return 0;
}

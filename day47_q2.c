//Find the longest word in a sentence//
#include <stdio.h>

int main() {
    char str[300], longest[100], current[100];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]%*c", str);   

    while (str[i] != '\0') {

        if (str[i] != ' ') {
            current[j++] = str[i]; 
            currLen++;
        } else {
            current[j] = '\0';      

            if (currLen > maxLen) {
                maxLen = currLen;
                for (int k = 0; k <= currLen; k++) {
                    longest[k] = current[k];  
                }
            }

            j = 0;
            currLen = 0;
        }

        i++;
    }

    current[j] = '\0';
    if (currLen > maxLen) {
        maxLen = currLen;
        for (int k = 0; k <= currLen; k++) {
            longest[k] = current[k];
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

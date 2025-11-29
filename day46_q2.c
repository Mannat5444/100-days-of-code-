//Find the first repeating lowercase alphabet in a string//
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};   
    int i, index, found = 0;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);   

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {   
            index = str[i] - 'a';              

            freq[index]++;                     

            if (freq[index] == 2) {            
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}

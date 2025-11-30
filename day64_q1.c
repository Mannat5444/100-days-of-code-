//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output//
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    
    int n = strlen(s);
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int freq[256] = {0};     
        int currLen = 0;

        for(int j = i; j < n; j++) {
            if(freq[(unsigned char)s[j]] == 1) { 
                break;
            }
            freq[(unsigned char)s[j]] = 1;
            currLen++;
        }

        if(currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of longest substring without repeating characters = %d\n", maxLen);

    return 0;
}

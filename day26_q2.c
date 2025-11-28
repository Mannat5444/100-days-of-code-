/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

**/
#include <stdio.h>

int main() {
    int i, j;
    int pattern[] = {1, 3, 5, 3, 1}; 
    int size = 5;

    for(i = 0; i < size; i++) {
        for(j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    return 0;
}

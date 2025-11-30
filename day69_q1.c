//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (one element repeated, others unique):\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int repeated = -1;

    for(int i = 0; i < n; i++) {
        int index = abs(arr[i]);

        
        if(index >= n) {
            printf("Error: array element out of range.\n");
            return 1;
        }

        if(arr[index] >= 0)
            arr[index] = -arr[index];
        else {
            repeated = index;
            break;
        }
    }

    if(repeated != -1)
        printf("Repeated Element: %d\n", repeated);
    else
        printf("No repeated element found.\n");

    return 0;
}

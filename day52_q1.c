//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence//
#include <stdio.h>

int main() {
    int arr[100], n, x;
    int ceilIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    // Find ceil of x
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ceilIndex = i;
            break;   
        }
    }

    printf("Ceil index: %d\n", ceilIndex);

    return 0;
}

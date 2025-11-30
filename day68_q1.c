//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number//
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (0 to n, missing one):\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = n * (n + 1) / 2;
    int sumArr = 0;

    for(int i = 0; i < n; i++)
        sumArr += arr[i];

    int missing = totalSum - sumArr;
    printf("Missing Number: %d\n", missing);

    return 0;
}

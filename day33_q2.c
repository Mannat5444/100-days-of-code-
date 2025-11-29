//Insert an element in a sorted array at the appropriate position.//
#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1]; 

    printf("Enter %d sorted elements (ascending order):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    
    for(i = n - 1; i >= 0 && arr[i] > element; i--) {
        arr[i + 1] = arr[i]; 
    }

    arr[i + 1] = element;
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

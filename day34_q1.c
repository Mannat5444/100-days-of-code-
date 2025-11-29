//Insert an element in an array at a given position.//
#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1];  

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

   
    for(i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = element; 

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

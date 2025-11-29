//Perform diagonal traversal of a matrix.//
#include <stdio.h>

int main() {
    int a[10][10], rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    for(int startCol = 0; startCol < cols; startCol++) {
        i = 0;
        j = startCol;
        while(i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    for(int startRow = 1; startRow < rows; startRow++) {
        i = startRow;
        j = cols - 1;
        while(i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}


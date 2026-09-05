#include <stdio.h>

int main() {
    int size;

    // Prompt user for the matrix size (Rows and Columns must be equal)
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    // Input matrix elements from the user
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Process and display the Lower Triangular Matrix
    printf("\nLower Triangular Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // If column index (j) is greater than row index (i), print 0
            if (j > i) {
                printf("0\t");
            } else {
                printf("%d\t", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

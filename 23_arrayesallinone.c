#include <stdio.h>

int main() {

    int n;
    printf("Enter the size of the square matrix (e.g. 3 for 3x3): ");
    scanf("%d", &n);

    int matrix[n][n];
    int even[n * n];   
    int evenCount = 0; 

    printf("Enter %d values:\n", n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            
            if (matrix[i][j] % 2 == 0) {
                even[evenCount] = matrix[i][j];
                evenCount++;
            }
        }
    }

    
    int isSymmetric = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if (!isSymmetric) break;
    }

    int largestVal = matrix[0][0];
    int largestCol = 0;
    for (int j = 1; j < n; j++) {
        if (matrix[0][j] > largestVal) {
            largestVal = matrix[0][j];
            largestCol = j;
        }
    }

   
    int smallestVal = matrix[n-1][0];
    int smallestCol = 0;
    for (int j = 1; j < n; j++) {
        if (matrix[n-1][j] < smallestVal) {
            smallestVal = matrix[n-1][j];
            smallestCol = j;
        }
    }

    int temp = matrix[0][largestCol];
    matrix[0][largestCol] = matrix[n-1][smallestCol];
    matrix[n-1][smallestCol] = temp;

    printf("\nLargest in first row: %d (at col %d)\n", largestVal, largestCol);
    printf("Smallest in last row: %d (at col %d)\n", smallestVal, smallestCol);
    printf("Swapped!\n");
    printf("\n--- Modified Matrix ---\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]); 
        }
        printf("\n");
    }
    printf("\n--- Even Numbers from Matrix ---\n");
    if (evenCount == 0) {
        printf("No even numbers found.\n");
    } else {
        for (int i = 0; i < evenCount; i++) {
            printf("%d ", even[i]);
        }
        printf("\n");
    }
    printf("\n--- Symmetry Check ---\n");
    if (isSymmetric) {
        printf("The matrix IS symmetric.\n");
    } else {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}
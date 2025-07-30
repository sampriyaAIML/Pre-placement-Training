#include <stdio.h>


void sumDiagonals(int matrix[][10], int n) { 
    int primarySum = 0;
    int secondarySum = 0;

    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        
        primarySum += matrix[i][i];

        
        secondarySum += matrix[i][n - 1 - i];
    }

    printf("Sum of Primary Diagonal: %d\n", primarySum);
    printf("Sum of Secondary Diagonal: %d\n", secondarySum);

   
    if (n % 2 == 1) {
        int centerElement = matrix[n / 2][n / 2];
        printf("Sum of Unique Diagonal Elements: %d\n", primarySum + secondarySum - centerElement);
    } else {
        printf("Sum of All Diagonal Elements: %d\n", primarySum + secondarySum);
    }
}

int main() {
   
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n1 = 3;

    printf("--- Matrix 1 (%dx%d) ---\n", n1, n1);
    sumDiagonals(matrix1, n1);
    printf("\n");

   
    int matrix2[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {12, 22, 32, 42},
        {18, 28, 38, 48}
    };
    int n2 = 4; 

    printf("--- Matrix 2 (%dx%d) ---\n", n2, n2);
    sumDiagonals(matrix2, n2);
    printf("\n");

    return 0;
}

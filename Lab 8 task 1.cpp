#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows and columns for matrix 1 and 2: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], c[m][n];  
    printf("Enter the elements for matrix 1 (Quarter 1):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements for matrix 2 (Quarter 2):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Total sales for Quarter 1 and Quarter 2:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);  
        }
        printf("\n");
    }

    return 0;
}


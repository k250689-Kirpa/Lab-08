#include<stdio.h>
int main() {
    int m, n;
    
    printf("Enter the number of rows(Students): ");
    scanf("%d", &m);
    printf("\nEnter the number of columns(marks): ");
    scanf("%d", &n);
    
    int a[m][n];
    
    printf("\nEnter all the elements: \n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe transpose for the above matrix is: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}

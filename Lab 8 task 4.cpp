#include<stdio.h>
int main() {
int m, n;
int count1 = 0, count0 = 0;

printf("Enter number of rows: ");
scanf("%d", &m);
printf("Enter number of columns: ");
scanf("%d", &n);

int a[m][n];
    printf("Enter the elements:\n");
	for(int i = 0; i < m; i++) {
	    for(int j = 0; j < n; j++) {
	        scanf("%d", &a[i][j]);
	    }
	}
	for(int i = 0; i < m; i++) {
	    for(int j = 0; j < n; j++) {
	        if(a[i][j] == 0) { 
	        count0++;
	        }
	        else {
	            count1++;
	        }
	    }
    }
    
    if (count0 > m*n/2) {
        printf("The above matrix is a sparse matrix");
    }
    else {
         printf("The above matrix is not a sparse matrix");
    }
    
    return 0;
}
        


include<stdio.h>
int main() {
    int n;
    int identity = 0;
    printf("Enter number of number of rows and columns: ");
    scanf("%d", &n);
    
    int seating[n][n];
    printf("Enter all the elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &seating[i][j]);
        }
    }
    //check if identity or not
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && seating[i][j] != 1) {
                identity = 0;
                break;
            }
            else if(i != j && seating[i][j] != 0) {
                identity = 0;
                break;
            }
            else {
                identity = 1;
            }
        }
    }
    
    if(identity = 0) {
        printf("The above seating arrangement is not identity");
    }
    else {
        printf("The above seating arrangement is identity");
    }
    return 0;
}


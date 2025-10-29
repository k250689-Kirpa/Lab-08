#include <stdio.h>


int main() {
    int a, b, c; // a=floors, b=rooms, c=beds
    
    int emptyCount = 0, occupiedCount = 0;


    printf("Enter number of floors: ");
    scanf("%d", &a);
    printf("Enter number of rooms per floor: ");
    scanf("%d", &b);
    printf("Enter number of beds per room: ");
    scanf("%d", &c);


    int building[a][b][c];


    printf("\nEnter bed status for each floor, room, and bed (0 = empty, 1 = occupied):\n");
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                printf("Floor %d, Room %d, Bed %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &building[i][j][k]);
            }
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                if (building[i][j][k] == 0)
                    emptyCount++;
                else if (building[i][j][k] == 1)
                    occupiedCount++;
            }
        }
    }
    


    printf("\nTotal Empty Beds: %d\n", emptyCount);
    printf("Total Occupied Beds: %d\n", occupiedCount);


    return 0;
}


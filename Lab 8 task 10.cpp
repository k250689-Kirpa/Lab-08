#include <stdio.h>


int main() {
    int a, b, c; // a=wards, b=patients, c=vital signs
    float rowSum = 0, colSum = 0;


    printf("Enter number of wards in hospital: ");
    scanf("%d", &a);
    printf("Enter number of patients per ward: ");
    scanf("%d", &b);
    printf("Enter vital signs per patient: ");
    scanf("%d", &c);


    int system[a][b][c];
    
    printf("\nEnter vital readings: \n");
    for(int i = 0; i < a; i++) {
    	for(int j = 0; j < b; j++) {
    		for(int k= 0; k < c; k++) {
    			printf("ward %d, Patient %d, Vital signs %d: " ,i+1, j+1, k+1);
    			scanf("%d", &system[i][j][k]);
    		}
    	}
    }
    
    for(int i = 0; i < a; i++) {
        printf("\nWard %d\nTotal readings per patient:\n", i);
        for (int j = 0; j < b; j++) {
            float rowSum = 0;
            for (int k = 0; k < c; k++) {
                rowSum += system[i][j][k];
            }
            printf("Patient %d Total = %.2f\n", j + 1, rowSum);
        }
    }
    
    for(int i = 0; i < a; i++) {
        printf("\nWard %d\nTotal readings of each vital sign per ward:\n", i);
        for (int k = 0; k < c; k++) {
            float colSum = 0;
            for (int j = 0; j < b; j++) {
                colSum += system[i][j][k];
            }
            printf("Vital %d Total = %.2f\n", k + 1, colSum);
        }
    }
    return 0;
}


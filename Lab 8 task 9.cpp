#include <stdio.h>
int main (void)
{
		int i,j,d,k, r, c, maxTemp;
	
		printf("Enter Number of cities: ");
		scanf("%d", &d);	


		printf("Enter Number of days: ");
		scanf("%d", &r);
		
		printf("Enter Number of times: ");
		scanf("%d", &c);
		
		int arr1[d][r][c];


		
		printf("Enter temperature readings: \n");
		
		for (k=0; k<d; k++)
		{
			for (i=0; i<r; i++)
			{
				for (j=0; j<c; j++)
				{
					printf("City %d, Day %d, Time %d: ", k+1, i+1, j+1);
					scanf("%d", &arr1[k][i][j]);
				}
			}
		}
		
		
		
		for (k=0; k<d; k++)
		{
			maxTemp = arr1[k][0][0];
			
			
			for (i=0; i<r; i++)
			{
				for (j=0; j<c; j++)
				{
					if (arr1[k][i][j]> maxTemp)
					{
						maxTemp = arr1[k][i][j];
					}
					
				}
			}
			printf("Max temp of city %d: ", k+1);
			printf("%d\n", maxTemp);
			
		}
		
		return 0;
		
}


# include <stdio.h>
int main (void)
{
		int i,j,b,k, r, c;
	
		printf("Enter Number of joints: ");
		scanf("%d", &b);	


		printf("Enter Number of movements: ");
		scanf("%d", &r);
		
		printf("Enter Number of coordinates: ");
		scanf("%d", &c);
		
		int arr1[b][r][c];


		
		printf("Enter values: \n");
		
		for (k=0; k<b; k++)
		{
			for (i=0; i<r; i++)
			{
				for (j=0; j<c; j++)
				{
					printf("Joint %d, Movement %d, Coord %d: ", k+1, i+1, j+1);
					scanf("%d", &arr1[k][i][j]);
				}
			}
		}
		
		for (k=0; k<b; k++)
		{
			for (i=0; i<r; i++)
			{
				for (j=0; j<c; j++)
				{
					if (arr1[k][i][j]<0)
					{
						arr1[k][i][j]= arr1[k][i][j]*(-1);
					}
				}
			}
		}
		
		 printf("\nNormalized Robot Arm Readings (Absolute Values):\n");
		for (k=0; k<b; k++)
		{
			printf("Joint %d:\n", k+1);
			for (i=0; i<r; i++)
			{
				for (j=0; j<c; j++)
				{
					printf("%d ",arr1[k][i][j]);
				}
				printf("\n");
			}
			printf("\n");
		}
		
		return 0;
		
}


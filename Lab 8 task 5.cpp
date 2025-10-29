#include <stdio.h>
int main (void)
{
	int i,j,k,r, c;
	float sumR=0, sumG=0, sumB=0;
	
	


		printf("Enter height(Rows): ");
		scanf("%d", &r);
		
		printf("Enter width(Columns): ");
		scanf("%d", &c);
		
		int arr1[r][c][3];


   		printf("\nEnter RGB values for each pixel:\n");
		
		for (i=0; i<r; i++)
		{
			for (j=0; j<c; j++)
			{
				printf("Pixel %d %d- Enter R, G, B: ", i,j);
				for(k=0; k<3; k++)
				scanf("%d", &arr1[i][j][k]);
			}
		}
		
		for (i=0; i<r; i++)
		{
			for (j=0; j<c; j++)
			{
				 sumR+=arr1[i][j][0];
				 sumG+=arr1[i][j][1];
				 sumB+=arr1[i][j][2];
			}
		}
		
		int totalPixels = r * c;
		float avgRed = sumR/totalPixels;
		float avgGreen = sumG/totalPixels;
		float avgBlue = sumB/totalPixels;
		
    printf("\nAverage Color Intensity:\n");
    printf("Red: %.2f\n", avgRed);
    printf("Green: %.2f\n", avgGreen);
    printf("Blue: %.2f\n", avgBlue);


    return 0;
}


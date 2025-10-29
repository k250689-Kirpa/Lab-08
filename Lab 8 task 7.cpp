#include <stdio.h>


int main (void)
{
	int n;


	printf("ROWS: ");
	scanf("%d", &n);
	int i, j;
	
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n-i; j++)
		{
			printf(" ");
		}
		for (j=65; j<65+i; j++)
		{
			printf("%c ", j);
		}
		printf("\n");
	}
}


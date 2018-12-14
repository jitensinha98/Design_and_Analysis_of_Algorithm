#include<stdio.h>
void floydWarshall(int a[][4])
	{
	int i,j,k;
	for (k=0;k<4;k++)
		{
		for(i=0;i<4;i++)
			{
			for(j=0;j<4;j++)
				{
				if((a[i][k]*a[k][j] != 0) && (i != j))
					{
					if((a[i][k]+a[k][j] < a[i][j]) || (a[i][j] == 0))
						a[i][j]=a[i][k]+a[k][j];
					}
				}
			}
		}
		printf("Shortest Path :\n ");
		for (i=0;i<4;i++)
			{
			for(j=0;j<4;j++)
				{
				printf("%d ",a[i][j]);
				}
			printf("\n");
			}
	}					
void main()
	{
	int a[4][4],i,j;
	printf("ENTER ARRAY :\n");
	for (i=0;i<4;i++)
		{
		printf("Enter row : \n");
		for(j=0;j<4;j++)
			{
			scanf("%d",&a[i][j]);
			}
		printf("\n");
		}
	printf("ARRAY ENTERED : \n");
	for (i=0;i<4;i++)
		{
		for(j=0;j<4;j++)
			{
			printf("%d ",a[i][j]);
			}
		printf("\n");
		}
	floydWarshall(a);
	}
			

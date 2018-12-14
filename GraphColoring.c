#include<stdio.h>
int g[50][50],x[50];
void nextcolor(int k,int n)
	{
	int i;
	do
	{
	x[k]=((x[k]+1)%(n+1));
	if(x[k]==0)
		return;
	for (i=1;i<=n;i++)
		{
		if((g[i][k] ==1) && ( x[k]==x[i]))
			break;
		}
		if (i==(n+1))
			return; 
	}while(1);
	}
void mcolor(int k,int n)
	{
	int i;
	do
	{
	nextcolor(k,n);
	if(x[k]==0)
		return;
	else if(k==n)
		{
		for(i=1;i<=n;i++)
			{
			printf("%d ",x[i]);
			}
		printf("\n");
		}
	else
		mcolor(k+1,n);
	}while(1);
	}
void main()
	{
	int i,j,n;
	printf("Enter nodes : \n");
	scanf("%d",&n);
	printf("Enter elements :\n");
	for(i=1;i<=n;i++)
		{
		for(j=1;j<=n;j++)
			{
			scanf("%d",&g[i][j]);
			}
		}
	for (i=1;i<=n;i++)
		x[i]=0;
	printf("Solution :\n");
	mcolor(1,n);
	}


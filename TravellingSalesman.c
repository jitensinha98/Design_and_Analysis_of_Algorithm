#include<stdio.h>
int completed[10],ary[10][10],n,cost=0;
void takeinput()
	{
	int i,j;
	printf("Enter number of villagers : \n");
	scanf("%d",&n);
	printf ("Enter cost matrix : \n");
	for (i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
			{
			scanf("%d",&ary[i][j]);
			}
		completed[i]=0;
		}
	printf("Entered Cost Matrix :\n");
	for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
			{
			printf("%d ",ary[i][j]);
			}
		printf("\n");
		}
	}
int least(int c)
	{
	int i,nc=999;
	int min,kmin;
	for(i=0;i<n;i++)
		{
		if((ary[c][i] !=0) && (completed[i]==0))
			if((ary[c][i]+ary[i][c]) < min)
				{
				min=ary[i][0]+ary[c][i];
				kmin=ary[c][i];
				nc=i;
				}
		}
	if(min != 999)
		cost+=kmin;
	return nc;
	}
void mincost(int city)
	{
	int ncity,i;
	completed[city]=1;
	printf("%d--->",city+1);
	ncity=least(city);
	if(ncity = 999)
		{
		ncity=0;
		printf("%d",ncity+1);
		cost+=ary[city][ncity];
		return;
		}
	mincost(ncity);
	}
void main()
	{
	takeinput();
	printf("The path is : \n");
	mincost(0);
	printf("Minimum cost : %d",cost);
	}
	

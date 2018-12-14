#include<stdio.h>
void Knapsack(float weight[],float profit[],float capacity,int n)
	{
	int i;
	float tp,x[100];
	for (i=0;i<n;i++)
		x[i]=0;
	for (i=0;i<n;i++)
		{
		if(weight[i]>capacity)
			break;
		else
			{
			x[i]=1;
			tp=tp+profit[i];
			capacity=capacity-weight[i];
			}
		}
	if( i < n)
		x[i]=capacity/weight[i];

	tp=tp+(x[i]*profit[i]);
	printf("Object Distribution :\n");
	for(i=0;i<n;i++)
		printf("%f ",x[i]);
	printf("Total Profit = %f",tp);
	}
void main()
	{
	float weight[100],profit[100],ratio[100],capacity,temp;
	int i,n,j;
	printf("Enter number of objects :\n");
	scanf("%d",&n);
	printf("Enter weight and profit :\n"); 
	for(i=0;i<n;i++)
		{
		scanf("%f %f",&weight[i],&profit[i]);
		}
	printf("Enter Capacity :\n");
	scanf("%f",&capacity);
	for (i=0;i<n;i++)
		{
		ratio[i]=profit[i]/weight[i];
		}
	for (i=0;i<n;i++)
		{
		for(j=i+1;j<n;j++)
			{
			if(ratio[j]>ratio[i])
				{ 	
				temp=ratio[j];
				ratio[j]=ratio[i];
				ratio[i]=temp;
			
				temp=weight[j];
				weight[j]=weight[i];
				weight[i]=temp;	

				temp=profit[j];
				profit[j]=profit[i];
				profit[i]=temp;
				}
			}
		}
	Knapsack(weight,profit,capacity,n);
	}			
			
		

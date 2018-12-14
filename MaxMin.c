#include<stdio.h>
int max=0,min=0,max1=0,min1=0,mid=0;
void MaxMin(int a[],int i,int j)
	{
	if (i==j)
		{
		max=a[i];
		min=a[i];
		}
	else if(i==(j-1))
		{
		if (a[i]>a[j])
			{
			max=a[i];
			min=a[j];
			}
		else
			{
			max=a[j];
			min=a[i];
			}
		}
	else
		{
		mid=(i+j)/2;
		MaxMin(a,i,mid);
		max1=max;
		min1=min;
		MaxMin(a,mid+1,j);
		if(max < max1)
			{
			max=max1;
			}
		if(min > min1)
			{
			min=min1;
			}
		}
	}
void main()
	{
	int arr[100],j,n;
	printf("Enter the limit of array :\n");
	scanf("%d",&n);
	printf("Enter array :");
	for(j=0;j<n;j++)
		{
		scanf("%d",&arr[j]);
		}
	MaxMin(arr,0,n-1);
	printf("Maximum = %d \n",max);
	printf("Minimum = %d \n",min);
	}


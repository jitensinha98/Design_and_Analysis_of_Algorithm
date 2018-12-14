#include<stdio.h>
int partition(int a[],int start,int end)
	{
	int p_index,pivot,i,temp;
	pivot=a[end];
	p_index=start;
	for(i=start;i<end;i++)
		{
		if(a[i]<=pivot)
			{
			temp=a[i];
			a[i]=a[p_index];
			a[p_index]=temp;
			p_index++;
			}
		}
	temp=a[p_index];
	a[p_index]=a[end];
	a[end]=temp;
	return p_index;
	}
void quickSort(int a[],int start,int end)
	{
	int p_index;
	if(start<end)
		{
		p_index=partition(a,start,end);
		quickSort(a,start,p_index-1);
		quickSort(a,p_index+1,end);
		}
	}
void main()
	{
	int arr[100],i,n;
	printf("Enter the limit of array :");
	scanf("%d",&n);
	printf("Enter array :");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	quickSort(arr,0,n-1);
	printf("Sorted Array :\n");
	for(i=0;i<n;i++)
		{
		printf("%d",arr[i]);
		}
	}








		

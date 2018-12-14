#include<stdio.h>
int binarySearch(int arr[],int f,int l,int search);
void main()
	{
	int a[100],i,k,n,pos;
	printf("Enter the limit of the array :\n");
	scanf("%d",&n);
	printf("Enter array :");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	printf("Enter the element to be searched :\n");
	scanf("%d",&k);
	pos=binarySearch(a,0,n-1,k);
	if(pos !=-1)
		printf("The searched element is found at index %d \n",pos);
	else
		printf("Element not found.\n");
	}
int binarySearch(int arr[],int f,int l,int search)
	{
	int mid=0;
	mid=(f+l)/2;
	if(l>=f)
		{
		if(search==arr[mid])
			return mid;
		else if (search > arr[mid])
			binarySearch(arr,mid+1,l,search);
		else
			binarySearch(arr,f,mid-1,search);
		}
	else
		return -1;
	}


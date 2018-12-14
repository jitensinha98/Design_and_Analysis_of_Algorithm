#include<stdio.h>
void merge(int arr[],int l,int mid,int r)
	{
	int nR,nL,i,j,k=0;
	nL=mid-l+1;
	nR=r-mid;
	int L[nL],R[nR];
	for (i=0;i<nL;i++)
		L[i]=arr[l+i];
	for (j=0;j<nR;j++)
		R[j]=arr[mid+1+j];
	i=0;
	j=0;
	k=l;
	while(i<nL && j<nR)
		{
		if(L[i]<=R[j])
			{
			arr[k]=L[i];
			i++;
			}
		else
			{
			arr[k]=R[j];
			j++;
			}
		k++;
		}
	while(i<nL)
		{
		arr[k]=L[i];
		i++;
		k++;
		}
	while(j<nR)
		{
		arr[k]=R[j];
		j++;
		k++;
		}
	
	}
void mergeSort(int arr[],int l,int r)
	{
	int mid=0;
	if(l<r)
		{
		mid=(l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
		}
	}
void main()
	{
	int a[100],i,n;
	printf("Enter the limit of the array :");
	scanf("%d",&n);
	printf("Enter array :");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	mergeSort(a,0,n-1);
	printf("The sorted array is : ");
	for(i=0;i<n;i++)
		{
		printf("%d",a[i]);
		}
	}

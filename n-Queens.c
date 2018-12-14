#include<stdio.h>
#include<stdlib.h>
int board[20],count;
void print(int n)
{
 int i,j;
 printf("\n\nSolution %d:\n\n",++count);
 
 for(i=1;i<=n;++i)
  printf("\t%d",i);
 
 for(i=1;i<=n;++i)
 {
  printf("\n\n%d",i);
  for(j=1;j<=n;++j) //for nxn board
  {
   if(board[i]==j)
    printf("\tQ"); //queen at i,j position
   else
    printf("\t-"); //empty slot
  }
 }
}
int place (int row,int column)
	{
	int i;
	for(i=1;i<=row-1;++i)
		{
		if(board[i]==column)
			return 0;
		else 
		if(abs(board[i]-column)==abs(i-row))
			return 0;
		}
	return 1;
	}
void queen(int row,int n)
	{
	printf("Solutions :\n");
	int column;
	for(column=1;column<=n;++column)
		{
		if(place(row,column))
			{
			board[row]=column;
			if(row==n)
				print(n);
			else
				queen(row+1,n);
			}
		}
	}
void main()
	{	
	int n;
	printf("enter number of queens :\n");
	scanf("%d",&n);
	queen(1,n);
	}

			

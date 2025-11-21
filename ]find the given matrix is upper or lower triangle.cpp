
#include<stdio.h>
int main()
{
	int m[10][10],i,j,n;
	printf("enter order of matix:");
	scanf("%d",&n);
    printf("enter matrix A elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&m[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(m[i][j]!=0)
			{
			  printf("given matrix is not a lower triangluar matrix\n");
			  return 0;	
			}
		}
	}
	printf("given matrix is lower triangluar matrix\n");
			  return 0;
}

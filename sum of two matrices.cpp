//c programme to do sum of two matrices
#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],i,j,r1,c1,r2,c2;
	printf("enter order of matix A:");
	scanf("%d%d",&r1,&c1);
	printf("enter order of matix B:");
	scanf("%d%d",&r2,&c2);
	if((r1==r2)&&(c1==c2))
	{
		printf("enter matrix A elements:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			scanf("%d",&A[i][j]);
		}
		printf("enter matrix B elements:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			scanf("%d",&B[i][j]);
		}
		//matrix addition
		for(i=0;i<r1;i++)
		{
		 for(j=0;j<c1;j++)
		 C[i][j]=A[i][j]+B[i][j];	
		}
		printf("after the addition of matrix A and matrix B matrix is:\n");
		for(i=0;i<r1;i++)
		{
		 for(j=0;j<c1;j++)
		 printf("%d\t",C[i][j]);
		 printf("\n");
     }
	}else
	{
		printf("matrix addition is not possible\n");
	}
	
	return 0;
}

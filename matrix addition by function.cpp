#include<stdio.h>
void read(int[10][10],int,int);
void display(int[10][10],int,int);
void add(int[10][10],int[10][10],int[10][10],int,int);
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2;
	printf("enter the order of the first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("enter the oder of the second matrix:");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		printf("enter the first matrix:");
		read(a,r1,c1);
		printf("enter the second matrix:");
		read(b,r2,c2);
		add(a,b,c,r1,c1);
		printf("adittion of first and second matrix is:\n");
		display(c,r1,c1);
	}
	else
	printf("addition is not possible.");
	return 0;
}
void read(int a[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	for(j=0;j<r;j++)
	scanf("%d",&a[i][j]);
}
void display(int a[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		printf("%d\t",a[i][j]);
		printf("\n");	
	}
}
void add(int a[10][10],int b[10][10],int c[10][10],int r,int C)
{
	int i,j;
	for(i=0;i<r;i++)
	for(j=0;j<r;j++)
	c[i][j]=a[i][j]+b[i][j];
	
}


#include<stdio.h>
void read (int[],int);
void display(int[],int);
void swap (int*,int*);
void quicksort(int[],int,int);
int main()
{
	int a[10],n;
	printf("enter no. of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	read(a,n);
	printf("before sorting:\n");
	display(a,n);
	quicksort(a,0,n-1);
	printf("\nafter sorting:\n");
	display(a,n);
	return 0;
}
void read(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
void swap (int*a,int*b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int p=a[low],i=low+1,j=high;
		while(i<=j)
		{
			while(i<=high&&a[i]<p)
            i++;
            while(j>low&&a[j]>p)
            j--;
            if(i<j)
            swap(&a[i],&a[j]);
		}
		swap(&a[low],&a[j]);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}

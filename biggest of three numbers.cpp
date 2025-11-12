#include<stdio.h>
int main()
{
	int a,b,c,biggest;
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	biggest=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("the biggest number is=%d\n",biggest);
	return 0;
}

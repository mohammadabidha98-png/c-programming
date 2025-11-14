#include<stdio.h>
int main()
{
	int a=6,b=5;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("%d&%d=%d\n",a,b,a&b);
	printf("%d|%d=%d\n",a,b,a|b);
	printf("~%d=%d\n",a,b,~a);
	printf("%d^%d=%d\n",a,b,a^b);
	printf("%d<<%d=%d\n",a,b,a<<2);
	printf("%d>>%d=%d\n",a,b,a>>2);
	return 0;
}

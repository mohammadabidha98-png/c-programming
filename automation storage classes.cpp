#include<stdio.h>
void f1();
void f1()
{
	int a=10;
	auto int b=30;
	printf("%d",a+b);
}
int main()
{
	auto int x=10;
	int y=20;
	printf("%d\n",x+y);
	f1();
	return 0;
}

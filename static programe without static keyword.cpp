#include<stdio.h>
void f1()
{
	int i=1;
	printf("%d\t",i);
	i++;
}
int main()
{
	int i=1;
	while(i<=5)
	{
	f1();
	i++;
}
	return 0;
}

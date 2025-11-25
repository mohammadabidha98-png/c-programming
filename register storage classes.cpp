#include<stdio.h>
void f1();
void f1()
{
	int n=10;
	register int i;
	for(i=0;i<n;i++)
	printf("%d\t",i);
}
int main()
{
	register char i;
	for(i='A';i<='Z';i++)
	printf("%c\t",i);
	printf("\n");
	f1();
	return 0;
}

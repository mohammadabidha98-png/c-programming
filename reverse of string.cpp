
#include<stdio.h>
int main()
{
	char s[10],ch;
	int i,j,l;
	puts("enter your name:");
	gets(s);
	puts("before reverse name is:");
	puts(s);
	for(i=0;s[i]!='\0';i++)
	l++;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		
		if(s[i]!=s[j])
		{
			printf("given string is not a palindrome");
			return 0;
		}
	}
	printf("given string is a palindrome");
	return 0;
}

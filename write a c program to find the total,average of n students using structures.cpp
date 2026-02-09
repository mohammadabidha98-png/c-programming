//1.write a c program to find the total,average of n students using structures 
#include<stdio.h>
struct student
{
	int rno;
	float m1,m2,m3;
	int total;
	float avg;
};
int main()
{
	struct student s[5];
	int i;
   for(i=0;i<2;i++)
	{
		printf("enter the %d student details:",i+1);
		scanf("%d%f%f%f",&s[i].rno,&s[i].m1,&s[i].m2,&s[i].m3);
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].avg=s[i].total/3;
	}
	for(i=0;i<2;i++)
	{
		printf(" %d student details are:",i+1);
		printf("\n%d\n%f\n%f\n%f\ntotal=%d\navg=%f\n",s[i].rno,s[i].m1,s[i].m2,s[i].m3);
	}
	return 0;
}

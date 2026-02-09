#include<stdio.h>
int main()
{
enum day{sun,mon,tue=4,wed,thu,fri,sat};
enum day today=thu;
printf("%d",today);
return 0;
}


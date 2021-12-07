#include<stdio.h>
void main()
{
	int a;
	printf("enter marks");
	scanf("%d",&a);
	if(a>=80)
	{
		printf("A");
	}
	else if(a>=70)
	{
		printf("B");
	}
	else if(a>=60)
	{
		printf("C");
	}
	else if(a>=50)
	{
		printf("D");
	}
	else
	{
		printf("fail");
	}
}

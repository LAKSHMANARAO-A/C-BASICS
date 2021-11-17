#include<stdio.h>
void main()
{
	int x=10,y=4;
	
	printf("%d\n", (x>y) && (x<y));
	printf("%d\n", (x>y) || !(x<y));
	printf("%d\n", (x>y) && !(x<y));
	printf("%d", !(x>y) || !(x<y));		
}

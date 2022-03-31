#include<stdio.h>
int main()
{
    int n,r,m=1,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        m=m*r;
        sum=sum+r;
        n=n/10;
	}
    printf("%d",m-sum);
}
    
    

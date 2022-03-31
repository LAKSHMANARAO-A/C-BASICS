#include<stdio.h>
int main()
{
    int n,r,t,s,sum=0;
    scanf("%d",&n);
    s=n*n;
    t=s;
    while(s>0)
    {
        r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if(sum==t)
    {
      printf("Neon number");  
    }
    else
    {
        printf("Not Neon number");
    }
}

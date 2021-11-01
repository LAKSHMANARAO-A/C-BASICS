#include<stdio.h>
void main()
{
int a, b,sum,diff,prodt,quot,remd,n;
a = 40;
b = 5;
sum = a+b;
diff = a-b;
prodt = a*b;
quot = a/b;
remd = a%b;
n = sum+diff+prodt+quot+remd;
printf("sum of %d and %d is,%d\n",a,b,sum);
printf("Difference between %d and %d is,%d\n",a,b,diff);
printf("Product of %d and %d is,%d\n",a,b,prodt);
printf("Quotient when %d is divided by %d is,%d\n",a,b,quot);
printf("Remainder when %d is divided by %d is,%d\n",a,b,remd);
printf("sum of all arithmetic operations: %d",n);
}



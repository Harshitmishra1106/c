#include<stdio.h>
#include<math.h>
void main()
{
    int n,sum=0,a,b,c;
    printf("enter a number\t");
    scanf("%d",&n);
    while(n!=0)
    {
     a=n%10;
     b=(n-a);
     c=b/10;
     n=c;  
     sum=sum+a;
    }
     printf("the sum of digits is %d",sum);
}
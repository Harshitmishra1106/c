#include<stdio.h>
void main()
{
    int a=0,b=1,n,c,i;
    printf("enter no. of terms of fibonacci series\t");
    scanf("%d",&n);
    if(n==1)
    {
    printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d\t%d",a,b);
    }
    else
    {
        printf("%d\t%d\t",a,b);
        for(i=3;i<=n;i++)
        {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
        }
    }
}
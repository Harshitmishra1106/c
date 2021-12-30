#include<stdio.h>
#include<math.h>
void main()
{
    int n,n1,a,b,c,sum=0;
    printf("enter a number to check\n whether the number is armstrong or not.");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
    a=n%10;
    b=(n-a);
    c=b/10;
    n=c;
    sum=sum+pow(a,3);
    }
    if(n1==sum)
    {
        printf("the number is an armstrong no.");
    }
    else
    {
        printf("the no. is not an armstrong");
    }
}
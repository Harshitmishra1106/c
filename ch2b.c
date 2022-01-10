#include<stdio.h>
void main()
{
    int n,a;
    printf("enter a no. to check\n whether it is divisible by 3 or not\n");
    scanf("%d",&n);
    a=n%3;
    if (a==0)
    {
        printf("%d is divisible by 3",n);
    }
    else
    {
        printf("%d is not divisible by 3",n);
    }
}
#include<stdio.h>
void main()
{
    int i,j,n,f=1,s=0;
    printf("enter value of n to get\n sum of factorials upto n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        s=s+f;
        f=1;
    }
    printf("%d is the sum of the factorials upto that of %d",s,n);
}

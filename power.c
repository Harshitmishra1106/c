#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,i,f=1;
    printf("i/p value of a & n to get a raised to the power of n\t");
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        f=f*a;
    }
    printf("%d is the result",f);
}
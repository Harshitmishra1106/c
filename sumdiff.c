#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,s=0,x;
    printf("i/p value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        s=s+x;
    }
    printf("%d is the sum of the no's",s);
}
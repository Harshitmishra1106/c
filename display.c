#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,a,b,c,s=0,d,e,f;
    printf("enter a no. to get its digits separated\n");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        b=(n-a);
        c=b/10;
        n=c;
        s=s*10+a;
    }
    while(s!=0)
    {
        d=s%10;
        e=s-d;
        f=e/10;
        s=f;
        printf("%d\n",d);
    }
}
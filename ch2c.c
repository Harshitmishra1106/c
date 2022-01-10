#include<stdio.h>
void main()
{
    int n,a,c=0,i;
    printf("enter no. of terms for series of common diff. 3\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c+3;
        printf("%d\t",c);
    }

}
#include<stdio.h>
void main()
{
    int a[5],i,f=1;
    printf("enter 5 no's to get their products\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
        f=f*a[i];
    }
    printf("%d is the product",f);
}
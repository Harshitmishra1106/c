#include<stdio.h>
void main()
{
    int a[3],i,c=0;
    printf("enter three numbers to get their sum\n");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    printf("%d",c);
}

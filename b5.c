#include<stdio.h>
void main()
{
    int i,j,a[5];
    printf("enter the array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        printf("%d",a[j]);
    }
}
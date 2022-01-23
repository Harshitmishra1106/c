#include<stdio.h>
void main()
{
    int a[30],n,i,j=0;
    printf("enter the no. of no's\n to be added\n");
    scanf("%d",&n);
    printf("enter the no's to be added\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=j+a[i];
    }
    printf("the result after addition is: %d",j);
}
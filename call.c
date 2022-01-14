#include<stdio.h>
void main()
{
    int i,s=0,a[5];
    printf("enter the value of the five elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",a[i]);
        s=s+a[i];
    }
    printf("%d is the sum of the entered no's",s);
}
#include<stdio.h>
void print(int a[5]);
void main()
{
    int i,a[5];
    printf("enter five array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    print(a);
}
void print(int b[5])
{
    int j;
    for(j=0;j<5;j++)
    {
        printf("%d",&b[j]);
    }
}
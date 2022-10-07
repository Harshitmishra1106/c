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
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }
    printf("are the array elements");
}

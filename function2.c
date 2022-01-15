#include<stdio.h>
void print(char a[5]);
void main()
{
    int i,a[5];
    printf("enter any five names");
    for(i=0;i<=4;i++)
    {
        scanf("%c",&a[i]);
    }
    print(a);
}
void print(char b[])
{
    int j;
    for(j=0;j<=5;j++)
    {
        printf("%c",&b[j]);
    }
}
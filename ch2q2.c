#include<stdio.h>
void main()
{
    int r,s,a;
    printf("enter the ages of ram, shyam and ajay respectively");
    scanf("%d%d%d",&r,&s,&a);
    if(r<s&&r<a)
    {
        printf("ram is the youngest one");
    }
    else if(s<a&&s<r)
    {
        printf("shyam is the youngest one");
    }
    else
    {
        printf("ajay is the youngest one");
    }
}
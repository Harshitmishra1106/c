#include<stdio.h>
void main()
{
    int l,b,p,a;
    printf("enter the length and breadth of the rectangle respectively\n");
    scanf("%d%d",&l,&b);
    p=2*(l+b);
    a=l*b;
    if(a==p)
    {
        printf("area of the rectangle is equal to its perimeter");
    }
    else
    {
        printf("area of rectangle is not equal to its perimeter");
    }
}

#include<stdio.h>
void main()
{
    int a,b,c,s;
    printf("enter the three angles of the triangle to be constructed");
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    if(s==180)
    {
        printf("thhe triangle is possible");
    }
    else
    {
        printf("the tringle is not possible");
    }

}
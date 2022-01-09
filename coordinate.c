#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the x and the y coordinates of the point\n");
    scanf("%d%d",&x,&y);
    if(x==0 && y!=0)
    {
        printf("point lies on the y-axis");
    }
    else if(x!=0 && y==0)
    {
        printf("point lies on the x-axis");
    }
    else
    {
        printf("point lies on the origin");
    }
}
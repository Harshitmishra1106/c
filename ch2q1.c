#include<stdio.h>
void main()
{
    int s,p,c;
    printf("enter the selling price and cost price resoectively\n");
    scanf("%d%d",&s,&p);
    c=s-p;
    if(c==0)
    {
        printf("there is neither profit nor loss");
    }
    else if(c<0)
    {
        printf("loss has occured");
    }
    else
    {
        printf("profit has occured");
    }
}
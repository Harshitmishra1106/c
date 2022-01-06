#include<stdio.h>
void main()
{
    int n,m,m1,w,w1;
    printf("enter the total population of the region\n");
    scanf("%d",&n);
    w=0.48*n;
    m=0.52*n;
    w1=0.38*w;
    m1=0.65*m;
    printf("%d is the total no. of illeterate men\n whereas %d is the tptal no. of illeterate women",m1,w1);
}
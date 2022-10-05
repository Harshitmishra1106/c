#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    float g;
    printf("enter any five no's to get their average.\n");
    scanf("%d\t%d\t%d\t%d\t%d",&a,&b,&c,&d,&e);
    g=(a+b+c+d+e)/5;
    printf("%f is the average of the entered no's",g);
}

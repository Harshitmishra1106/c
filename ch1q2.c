#include<stdio.h>
#include<math.h>
void main()
{
    int p,c,m,e,s;
    float y;
    printf("enter the marks of the student in phy,chem,math,eng \n and social sc. respectively\n");
    scanf("%d %d %d %d %d",&p,&c,&m,&e,&s);
    y=(p+c+m+e+s)/5;
    printf("the student has secured %f percent",y);
}
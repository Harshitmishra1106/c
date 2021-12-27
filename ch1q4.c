#include<stdio.h>
#include<math.h>
void main ()
{
    int l,b,r;
    float a,p,a1,p1;
    printf("enter length and breadth of the rectangle respectively \n also enter radius of the circle\t");
    scanf("%d %d %d",&l,&b,&r);
    a=l*b;
    p=2*(l+b);
    a1=3.14*r*r;
    p1=6.28*r;
    printf("the area of the rectangle is %f sq.unit\n the perimeter of the rectangle is %f unit\n the area of the circle is %f sq.unit\n the circumference of the circle is %f unit",a,p,a1,p1);
}
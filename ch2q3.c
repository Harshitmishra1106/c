#include<stdio.h>
#include<math.h>
void main ()
{
    int c;
    float f;
    printf("enter the temperature in celsius \t");
    scanf("%d",&c);
    f=(1.4*c)+32;
    printf("the temperature(in fahrenhiet) is :\n %f degree fahrenhiet",f);
}
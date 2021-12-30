#include<stdio.h>
void main()
{
    float d,m,f,i,c;
    printf("enter the distance b/w the two cities \t");
    scanf("%f",&d);
    m=d*1000;
    f=d*3281;
    i=d*39370;
    c=d*100000;
printf("the distance between the two cities is:\n %f (in meters)\n %f (in foots)\n %f (in inches)\n %f (in centimeters)",m,f,i,c);
}
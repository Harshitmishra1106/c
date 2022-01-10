#include<stdio.h>
void main()
{
    int x,m,c;
    char d;
    printf("enter your age\n 12 or 30");
    scanf("%d",&x);
    switch(x)
    {
        case 12:
        {
        printf("your age is %d\n enter your class\n",x);
        scanf("%d",&c);
        printf("your class is %d\n enter your marks\n",c);
        scanf("%d",&m);
        if(m<50)
        {
            printf("you need to work harder\n best of luck");
        }
        else
        {
            printf("if you desire,you can achieve your goals");
        }
        }
        break;
        case 25:
        {
            printf("your age is %d\n enter your degree which you are persuing\n",x);
            scanf("%c",&d);
            printf("okkk.... you are persuing your %c degree\n may god give you strength\n to bear up your responsibilities",d);
        }
        break;
    }
}
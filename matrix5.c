#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j;
    printf("enter the elements of the two matrices\n to get their subtraction\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&b[i][j]);
       }
   }
   printf("resultant matrix after subtraction:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\t",a[i][j]-b[i][j]);
       }
       printf("\n");
   }
}
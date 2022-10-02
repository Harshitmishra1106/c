#include<stdio.h>
void main(){
    int a[100],b[100],c[100],asize,bsize,i,j,k=0;
    printf("enter the size of the two sets respectively\n");
    scanf("%d%d",&asize,&bsize);
    printf("now enter the elements of set A\n");
    for(i=0;i<asize;i++){
        scanf("%d",&a[i]);
    }
    printf("now enter the elements of set B\n");
    for(j=0;j<bsize;j++){
        scanf("%d",&b[j]);
    }
    for (i=0;i<asize;i++){
        for (j = 0; j <bsize; j++){
            if(a[i]!=b[j])
            continue;
            else{
                c[k]=a[i];
                k++;
                break;
            }
            
        }
    
    }
    printf("intersection of sets A and B are:\n");
    for(i=0;i<k;i++){
        printf("%d\t",c[i]);
    }
    
}
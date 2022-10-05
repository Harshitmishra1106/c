#include <stdio.h>

int main(void) {
	long int T,X[10000],i;
	scanf("%ld",&T);
	for(i=0;i<T;i++){
	    scanf("%ld",&X[i]);
	}
	for(i=0;i<T;i++){
	    if(X[i]<=45000&&X[i]>=67){
	        printf("YES\n");
	    }
	    else
	    printf("NO\n");
	}
	return 0;
}


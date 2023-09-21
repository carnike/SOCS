#include <stdio.h>
#include <stdlib.h>
//B
int main() {
	long long a, i, j, k;
    scanf("%lld", &a); getchar();
    long long arr2[a], arr1[a];
    
    for(i=0; i<a; i++){
        arr2[i]=0;
        arr1[i]=0;
    }

    for(i=0; i<a; i++){
            scanf("%lld", &arr1[i]); 
    }
    getchar();

    for(j=0; j<a; j++){
            scanf("%lld", &arr2[arr1[j]]); 
    }
    getchar();


   for(i=0; i<a; i++){
        if(i == a-1){
          printf("%lld", arr2[i]);
   		} else {
             printf("%lld ", arr2[i]);
            }
    	}
    printf("\n");
	return 0;
}

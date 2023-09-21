#include <stdio.h>

int main(){
   long long a;
   scanf("%lld",&a);
   
   long long i,sum=0;
   long long arr[a];
   for (i = 0; i < a; i++) {
      scanf("%lld",&arr[i]);
      if(arr[i]>=0){
          sum+=arr[i];
    	}
	}
    printf("%lld\n",sum);
 
}

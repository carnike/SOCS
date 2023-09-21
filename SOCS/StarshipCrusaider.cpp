#include <stdio.h>
int main()
{
	long long a,i;
	scanf("%lld", &a);
	
	
	
	for(i=1;i<=a;i++){
		long long b,j,k,l;
		scanf("%lld",&b);
		
		long long arr1[b];
		long long arr2[b];
		for(j=0;j<b;j++){
			scanf("%lld", &arr1[j]);
		
		}
		for(k=0;k<b;k++){
			scanf("%lld", &arr2[k]);
		}
		long long sum =0;
		for(l=0;l<b;l++){
			if(arr1[l] < arr2[l]){
				sum = sum + 1;
			}
		}
		printf("Case #%d: ", i);
		printf("%d", sum);
		printf("\n");
	}
	
	
}

#include <stdio.h>
int main()
{
	long long a;
	scanf("%lld", &a);
	
	long long arr[a];
	long long min = 100001;
	long long i;
	long long sum1 = 0, sum2 = 0;
	for(i=0;i<a;i++){
		scanf("%lld", &arr[i]);
		if (arr[i] % 2 == 0){
			sum2+= arr[i];
		}
		else{
			sum1 += arr[i];
			if(arr[i]< min)
			min = arr[i];
		}
		if ( i == a-1 && sum1 %2 != 0){
			sum1 -= min;
		}
	}
	printf("%lld\n", sum1+sum2);
	
return 0;	
}

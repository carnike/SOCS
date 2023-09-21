#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long int i;
	long long int a[n],b[n];
	long long int c[n];
	for(i=0;i<n;i++){
		scanf("%lld %lld", &a[i], &b[i]);	
	}
	for(i=0;i<n;i++){
		c[i] = ((a[i] >> b[i] ) & 1);
	}	
		for(i=0;i<n;i++){
			printf("%lld\n", c[i]);
		}
	
	
}

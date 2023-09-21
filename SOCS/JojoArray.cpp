#include <stdio.h>
#include <stdlib.h>
//D
int main() {
	long long a,i,j;
	scanf("%lld", &a);

	for(i=1; i<=a; i++){
    long long b;
    scanf("%lld", &b);
    long long arr[b];

    for(j=0; j<b; j++){
        scanf("%lld", &arr[j]);
    }

    long long sum = 0;
    long long num =0;

    for(j=0; j<b; j++){
        sum = sum + arr[j];
    }
    for(j=0;j<b;j++){
		if(sum<arr[j]){
            num += 1;
		}
    }
    
    printf("Case #%lld: ", i);
    printf("%lld", sum);
    printf("\n");
    printf("%ld", num);
    printf("\n");
}
	return 0;
}

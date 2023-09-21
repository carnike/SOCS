#include <stdio.h>
int main() {

	long long a,i,j;
	scanf("%lld", &a);
	
	for(i=1; i<=a; i++){
	
	int max1, max2;
	max1 =-1000000, max2 = 0;
	
	long long b;
    scanf("%lld", &b);
    long long arr[b];

    for(j=0; j<b; j++){
        scanf("%lld", &arr[j]);
    	}
    for(j=0; j<b; j++)
    {
        if(arr[j] > max1)
        {
            max2 = max1;
            max1 = arr[j];
        }
        else if(arr[j] > max2)
        {
            max2 = arr[j];
        }
    }
    
    long long sum=0;
    sum = max1+max2;
    printf("Case #%lld: ", i);
    printf("%lld", sum);
    printf("\n");
} 
	return 0;
}

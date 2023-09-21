#include <stdio.h>
int main()
{
	long long a,b,c;
	scanf("%d", &a);
	
	int i,j,k,l;
	int sum;
	for(i=1;i<=a;i++){
		scanf("%d",&b);
		getchar();
		long long arr[b][b];
		for(j=0;j<b;j++){
			for(k=0;k<b;k++){
				scanf("%lld", &arr[j][k]);
			}
		}
		printf("Case #%d: ", i);
		long long sum =0;
		for(j=0; j< b; j++){
			for(k=0; k<b; k++){
				sum += arr[k][j];
			}
			if(j == b-1){
				printf("%lld", sum);
				sum = 0;
			}
			else{
				printf("%lld ", sum );
					sum=0;
				
			}
			
		}
		printf("\n");
		}
	}

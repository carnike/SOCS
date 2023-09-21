#include <stdio.h>
int main(){
	int n , num = 1;
	scanf("%d", &n); getchar();

	while(n > 0){
		long long int a, b;
		long long int c =0 , d =0;
		
		scanf("%lld", &a); getchar();
		
		int i;
		for(i = 0; i < a; i++){
			scanf("%lld", &b); getchar();
			c += b;
		}
		printf("Case #%d: %lld\n", num ,c);
		num++;
		n--;
	}
}




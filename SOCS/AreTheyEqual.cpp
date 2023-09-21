#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	
	int i,j,k;
	
	for(i=1;i<=a;i++){
		int b;
		int arr[b];
		scanf("%d", &b);
		
		for(j=0;j<b;j++){
			scanf("%lld", &arr[j]);
			
		}
		printf("Case #%d: ", i);
		for(k=b-1;k>=0;k--){
			if(k < (b-1)){
				printf("%lld ", arr[k]);
			}
			else if(k == (b-1)){
				printf("%lld ", arr[k]);
			}
			
		}
		printf("\n");
	}
	
}

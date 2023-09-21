#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	
	int i,j,k;
	
	for(i=1;i<=a;i++){
	
		int b;
		scanf("%d", &b);
			
		int arr[b];
		for(j=0;j<b;j++){
			scanf("%d", &arr[j]);
			
		}
		printf("Case #%d: ", i);
		for(k=b-1;k>=0;k--){
			if(k > 0){
				printf("%d ", arr[k]);
			}
			else if(k == 0){
				printf("%d\n", arr[k]);
			}
			
		}
		
	}
	
}

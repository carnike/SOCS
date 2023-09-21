#include <stdio.h>
int main ()
{
	int b;
		scanf("%d", &b);
	int j;		
		int arr[b];
		for(j=0;j<b;j++){
			scanf("%d", &arr[j]);
			
		}
	int k;	
		for(k=b-1;k>=0;k--){
			if(k > 0){
				printf("%d ", arr[k]);
			}
			else if(k == 0){
				printf("%d\n", arr[k]);
			}
			
		}
	
}

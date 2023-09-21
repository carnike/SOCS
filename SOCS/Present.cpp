#include <stdio.h>
int main ()
{
	int a;
	int num = 0;
	scanf("%d", &a);
	int i;
	for(i=1;i<=a;i++){
		int b;
		scanf("%d", &b);
		int arr[b];
		int j;
		for(j=0;j<b;j++){
			scanf("%d", &arr[j]);
		}
		int max = arr[0];
		int k;
		for(k=0;k<b;k++){
			if(max < arr[k]){
				max = arr[k];
			}
		
		}
			for(k=0;k<b;k++){
			if(max == arr[k]){
				num += 1;
			}
		
		}
		
	printf("Case #%d: ", i);
	printf("%d\n", num);
	num =0;
	}
	

}

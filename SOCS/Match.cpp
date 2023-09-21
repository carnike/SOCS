#include <stdio.h>
int main ()
{
	int a,b,c,d;
	scanf("%d", &a);
	
	int i,j;
	for(i=1;i<=a;i++){
		scanf("%d", &b);
		
		int arr[b];
		for(j=0;j<b;j++){
			scanf("%d", &arr[j]);
		}
		scanf("%d %d", &c, &d);
		printf("Case #%d : ", i );
		if(arr[c-1] > arr[d-1]){
			printf("Bibi\n");
		}
		if(arr[c-1] < arr[d-1]){
			printf("Lili\n");
		}
		if(arr[c-1] == arr[d-1]){
			printf("Draw\n");
		}
	}
	
	
}

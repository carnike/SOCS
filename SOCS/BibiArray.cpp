#include <stdio.h>
int main(){
	
	int a,num = 1;
	scanf("%d", &a);
	int b,i;
	int j,k,l,m;
	
	for(i=1; i<=a;i++){
		scanf("%d", &b);
		int arr[b];
		int sum = 0;
		for(j=0;j<b;j++){
			scanf("%d", &arr[b]);
		sum+=arr[b];
			
		}
	printf("Case #%d: ", num);
	printf("%d\n",sum);
			num++;		
}
}


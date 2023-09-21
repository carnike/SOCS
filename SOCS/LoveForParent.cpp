#include <stdio.h>
	int main() {
	int a,b,c,d,num = 1;
	scanf("%d",&a);
	
	int i,j,k,m;
	int arr[a];
	for(i=0;i<a;i++){
	scanf("%d", &arr[i]);	
	}
	
	scanf("%d", &b);
	while (b > 0){
	int c, d;
		scanf("%d %d", &c, &d);
		arr[c-1] = d;
		
		printf("Case #%d: ",num);
		
		int j;
		for(j = 0; j < a; j++){
			if(j < (a - 1)){
				printf("%d ", arr[j]);
			} else if(j == (a - 1)){
				printf("%d\n", arr[j]);
			}
			
		}
		b--;
		num++;
	}	
		
	}
	
	



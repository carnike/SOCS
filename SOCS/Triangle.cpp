#include <stdio.h>
int main()
{
	int a,num = 1;
	scanf("%d", &a);
	
	int b,i;
	for(i=1; i<=a;i++){
		scanf("%d", &b);
		printf("Case #%d:\n", num);
		int j,k,l,m;
	for(j=1;j <= b; j++){
		for(k=b; k > j; k--){
			printf(" ");
		}	
		if(b % 2 == 0){
		
		for(l =1; l<=j;l++){
			if(l % 2 == 0){
				printf("*");
			}
			else{
				printf("#");
			}
				
		}
		printf("\n");
	}else{
		for(m =1; m<=j;m++){
			if(m % 2 == 0){
				printf("#");
			}
			else{
			printf("*");
		}
			
		}
			
	printf("\n");	
	}
			
		
	}
		
	num++;	
	}
		
}

#include <stdio.h>
int main (){
	int a, b;              
	scanf("%d", &a);                                                
	while(a > 0){ 
		scanf("%d", &b);   
		int c, d;
		for(c = 1; c <= b; c++){
			for(d = 1; d <= b; d++){
				if(c == 1 || c == b || d == b || c == d || d == 1 || c + d == b + 1){
					printf("*");
				} else {
					printf(" ");
				}
			} 
			printf("\n");
		}
		printf("\n");
		a--;
	}
	return 0;
}


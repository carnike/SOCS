#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	int c,d;
	for(int c = 0; c < a; c++){
		for( int d = 0; d < a; d++){
			printf("#");
		}
		printf("\n");
		
	}
	
	printf("\n");
	int e,f;
		for(e = 1; e <= a; e++){
			for(f = 1; f <= a; f++){
				if(e % b == 0){
					printf("#");
				} else { 
					printf(".");
				}
			}
			printf("\n");
		}
		
		printf("\n");
		int g, h;
		for(g = 1; g <= a; g++){
			for(h = 1; h <= a; h++){
				if(h % b == 0){
					printf("#");
				} else {
					printf(".");
				}
			}
			printf("\n");
		}	
}

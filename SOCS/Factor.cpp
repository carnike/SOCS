#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	int i,j;
	scanf("%d", &a);
	
	for(i=1; i<= a; i++){
		scanf("%d", &b);
		
		int c = 0;
		for(j=1;j<=sqrt(b);j++){
			if(b % j ==0){
				c+=2;
			}
			if(j*j == b){
				c--;
			}
		}
		
		printf("Case #%d: %d\n", i, c);
		
	}	
	
}

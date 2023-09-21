#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for(i = 1; i <= a; i++){
	
	int b,c;
	scanf("%d %d", &b, &c);
	while(b != c){
	if(b % 2 == 0){
		b /= 2;
		if(b == 1){
			goto label;
		} 
		
	}
	else{
		b=b*3 + 1;
		if(b == 1){
			goto label;;
		}
		
	}	
	}
	label:
	printf("Case #%d: ", i);
	if(b == c){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	}
	
}

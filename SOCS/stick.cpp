#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for(i=1; i<=a;i++){
		int b,c,d;
		scanf("%d %d %d", &b, &c, &d);
		printf("Case #%d: ", i);
	
		if(b+c>d && b+d>c && d+c>b){
			printf("Yes");
		}
		else{
			printf("No");
		}
		printf("\n");
	}


}

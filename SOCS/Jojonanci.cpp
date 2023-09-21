#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for(i =1; i<=a; i++){
		int b , c ,d ;
		int j,sum;
		scanf("%d %d %d", &b, &c, &d);
		if(b == 0){
			printf("Case #%d: ", i);
			printf("%d\n", c);
		}
		else if(b == 1){
			printf("Case #%d: ", i);
			printf("%d\n", d);
		}
		else{
			for(j=0;j<b-1;j++){
		sum = d-c;
		c=d;
		d=sum;	
			}
		printf("Case #%d: ", i);
		printf("%d\n", d);
			
		}
	}
}

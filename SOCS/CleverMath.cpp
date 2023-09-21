#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c;
	scanf("%d", &a);
	
	int i;
	for(i=1;i<=a;i++){
		scanf("%d %d", &b, &c);
		printf("Case #%d: ", i);
		
		int d, sum=0,e=0;
		while(b !=0 || c!=0){
			d=b%10 + c%10;
			b=b/10;
			c=c/10;
			if(d <10){
				sum= sum +d*pow(10,e);
			}
			else{
				sum= sum +d%10*pow(10,e);
			}
			e++;
		}
		printf("%d\n", sum);
		}	
}

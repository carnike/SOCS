#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	int i;
	int sum;
	for(i=1; i < c;i++){
		sum = a+b;
		a=b;
		b=sum;

	}
	printf("%d\n", b);
	
}

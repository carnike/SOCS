#include <stdio.h>

int main()
{
	int n,sum=0,b;
	scanf("%d",&n);
	while(n>9){
		b=n%10;
		sum=sum+b;
		n=n/10;	
	}
	printf("%d",sum);
	return 0;
}

